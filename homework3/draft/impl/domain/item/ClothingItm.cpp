#include "ClothingItem.h"

void ClothingItem::createClothingItem() {

}

void ClothingItem::addNewRating() {

}

/* 
	@return { itemName, companyName, price, quantity }
*/
vector<string> ClothingItem::getSellingItemInfo() {
	return { this->itemname, this->companyName, to_string(this->price), to_string(this->quantity) };
}