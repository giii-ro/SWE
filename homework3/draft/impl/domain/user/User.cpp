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

vector<ClothingItem> User::getClothingItemList() {
	return this->sellingItemList;
}

string User::getName() {
	return this->name;
}