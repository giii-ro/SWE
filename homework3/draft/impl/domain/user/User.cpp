#include "User.h"

void User::addNewPurchaseHistory() {

}

User User::createUser(string name, string ssn, string id, string password) {
	return User(name, ssn, id, password);
}

void User::logoutUser() {

}

void User::removeUser() {

}

bool User::validateUser() {
	return 0;
}

vector<ClothingItem> User::getSellingClothingItemList() {
	return this->sellingItemList;
}
vector<ClothingItem> User::getPurchaseClothingItemList() {
	return this->purchaseItemList;
}

string User::getName() {
	return this->name;
}