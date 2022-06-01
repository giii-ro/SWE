#include "ClothingItem.h"
#include "../domain/user/User.h"

extern vector<User> userList;
extern vector<ClothingItem> itemList;
extern string currentUserName;

void ClothingItem::createClothingItem(string itemName, string companyName, int price, int quantity) {
	ClothingItem item = ClothingItem(itemName, currentUserName, companyName, price, quantity);

	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == currentUserName) {
			userList[i].addSellingList(item);
		}
	}

	itemList.push_back(item);
}


void ClothingItem::addNewRating(int rating) {
	this->averageSatisfactionRating += (double) rating;
}

void ClothingItem::decreaseQuantity() {
	if (this->quantity) {
		this->quantity -= 1;
	}
}

string ClothingItem::getItemName() {
	return this->itemName;
}

/*
	@return { sellerName, itemName, averageSatisfactionRating }
*/
vector<string> ClothingItem::getPurchaseRatingInfo() {
	return { this->sellerName, this->itemName, to_string(this->averageSatisfactionRating) };
}

/*
	@return { sellerName, itemName }
*/
vector<string> ClothingItem::getPurchaseItemInfo() {
	return { this->sellerName, this->itemName };
}

/* 
	@return { itemName, companyName, price, quantity }
*/
vector<string> ClothingItem::getSellingItemInfo() {
	return { this->itemName, this->companyName, to_string(this->price), to_string(this->quantity) };
}

/*
	@return { sellerName, itemName, companyName, price, quantity, averageSatisfactionRating } 
*/
vector<string> ClothingItem::getItemInfo() {
	return { this->sellerName, this->itemName, this->companyName, to_string(this->price), to_string(this->quantity), to_string(this->averageSatisfactionRating) };
}