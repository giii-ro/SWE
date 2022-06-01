#include <algorithm>
#include "User.h"

extern string currentUserName;
extern vector<User> userList;

void User::addNewPurchaseHistory() {

}

User User::createUser(string name, string ssn, string id, string password) {
	return User(name, ssn, id, password);
}

void User::logoutUser() {

}

void User::removeUser(string id) {
	auto it = find(userList.begin(), userList.end(), id);

	if (it != userList.end()) {
		userList.erase(it);
	}
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

bool User::operator==(const string id) { return this->id == id; }
