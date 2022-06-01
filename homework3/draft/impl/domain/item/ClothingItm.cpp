#include "ClothingItem.h"

extern vector<ClothingItem> itemList;
extern string currentUserName;

void ClothingItem::createClothingItem(string itemName, string companyName, int price, int quantity) {
	ClothingItem item = ClothingItem(itemName, currentUserName, companyName, price, quantity);

	itemList.push_back(item);
}

void ClothingItem::addNewRating() {

}

string ClothingItem::getItemName() {
	return this->itemname;
}

/* 
	@return { itemName, companyName, price, quantity }
*/
vector<string> ClothingItem::getSellingItemInfo() {
	return { this->itemname, this->companyName, to_string(this->price), to_string(this->quantity) };
}

/*
	@return { sellerName, itemName, companyName, price, quantity, averageSatisfactionRating } 
*/
vector<string> ClothingItem::getItemInfo() {
	return { this->sellerName, this->itemname, this->companyName, to_string(this->price), to_string(this->quantity), to_string(this->averageSatisfactionRating) };
}