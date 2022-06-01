#include <algorithm>
#include "User.h"
#include <iostream>

extern string currentUserName;
extern vector<User> userList;

void User::addNewPurchaseHistory(ClothingItem* item) {
	this->purchaseItemList.push_back(item);
}

void User::addSellingList(ClothingItem item) {
	this->sellingItemList.push_back(item);
}

User User::createUser(string name, string ssn, string id, string password) {
	return User(name, ssn, id, password);
}

bool User::loginUser(string id, string password) {
	vector<User>::iterator it = find(userList.begin(), userList.end(), id);

	if (it != userList.end()) {
		if (it->password == password) {
			currentUserName = it->name;

			return true;
		}
	}

	return false;
}

string User::logoutUser() {
	for (User user: userList) {
		if (currentUserName == user.name) {
			currentUserName = "";

			return user.id;
		}
	}

	currentUserName = "";
	return "";

}

void User::removeUser(string id) {
	vector<User>::iterator it = find(userList.begin(), userList.end(), id);

	if (it != userList.end()) {
		userList.erase(it);
	}
}

User* User::searchUser(string name) {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == name) {
			return &userList[i];
		}
	}
}

vector<ClothingItem> User::getSellingClothingItemList() {
	return this->sellingItemList;
}
vector<ClothingItem*> User::getPurchaseClothingItemList() {
	return this->purchaseItemList;
}

string User::getName() {
	return this->name;
}

string User::getId() {
	return this->id;
}

bool User::operator==(const string id) { return this->id == id; }
