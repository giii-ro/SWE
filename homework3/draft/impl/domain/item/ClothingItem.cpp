#include "ClothingItem.h"
#include "../domain/user/User.h"

extern vector<User> userList;
extern vector<ClothingItem> itemList;
extern string currentUserName;

void ClothingItem::createClothingItem(string itemName, string companyName, int price, int quantity) {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == currentUserName) {
			ClothingItem item = ClothingItem(itemName, userList[i].getId(), companyName, price, quantity);

			itemList.push_back(item);
			userList[i].addSellingList(item);

			break;
		}
	}
}

ClothingItem ClothingItem::searchClothingItem(string itemName) {
	for (int i = 0; i < itemList.size(); i++) {
		if (itemList[i].getItemName() == itemName) {
			return itemList[i];
		}
	}
}


void ClothingItem::addNewRating(int rating) {
	this->sumSatisfactionRating += (double) rating;
	this->ratingCount += 1;
}

void ClothingItem::decreaseQuantity() {
	if (this->quantity) {
		this->quantity -= 1;
	}
}

string ClothingItem::getItemName() {
	return this->itemName;
}

double ClothingItem::getAverageSatisfactionRating() {
	double rating = 0;

	if (this->ratingCount != 0) {
		rating = this->sumSatisfactionRating / this->ratingCount;
	}

	return rating;
}

/*
	@return { sellerId, itemName, currentRating }
*/
vector<string> ClothingItem::getPurchaseRatingInfo(int rating) {
	return { this->sellerId, this->itemName, to_string(rating) };
}

/*
	@return { sellerId, itemName }
*/
vector<string> ClothingItem::getPurchaseItemInfo() {
	return { this->sellerId, this->itemName };
}

/* 
	@return { itemName, companyName, price, quantity }
*/
vector<string> ClothingItem::getSellingItemInfo() {
	return { this->itemName, this->companyName, to_string(this->price), to_string(this->quantity) };
}

/*
	@return { sellerId, itemName, companyName, price, quantity, averageSatisfactionRating } 
*/
vector<string> ClothingItem::getItemInfo() {
	return { this->sellerId, this->itemName, this->companyName, to_string(this->price), to_string(this->quantity), to_string(this->getAverageSatisfactionRating()) };
}