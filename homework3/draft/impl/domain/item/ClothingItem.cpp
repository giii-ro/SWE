#include "ClothingItem.h"

void ClothingItem::createClothingItem() {

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