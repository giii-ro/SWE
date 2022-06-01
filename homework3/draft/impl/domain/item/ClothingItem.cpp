#include "ClothingItem.h"

void ClothingItem::createClothingItem() {

}

void ClothingItem::addNewRating() {

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