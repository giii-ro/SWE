#include <algorithm>
#include <iostream>
#include "User.h"

extern string currentUserName;
extern vector<User> userList;

void User::addNewPurchaseHistory() {

}

User User::createUser(string name, string ssn, string id, string password) {
	return User(name, ssn, id, password);
}

bool User::loginUser(string id, string password) {
	auto it = find(userList.begin(), userList.end(), id);

	if (it != userList.end()) {
		if (it->validateUser(password)) {
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
	auto it = find(userList.begin(), userList.end(), id);

	if (it != userList.end()) {
		userList.erase(it);
	}
}

bool User::validateUser(string password) {
	if (this->password == password) {
		return true;
	}

	return false;
}

vector<ClothingItem> User::getClothingItemList() {
	return this->sellingItemList;
}

string User::getName() {
	return this->name;
}

bool User::operator==(const string id) { return this->id == id; }
