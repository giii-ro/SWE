#pragma once
#include <string>
#include <vector>
#include "../domain/item/ClothingItem.h"
#include "../domain/User/User.h"
using namespace std;

extern std::ofstream out;
extern string currentUserName;
extern string currentItemName;
extern vector<ClothingItem> itemList;
extern vector<User> userList;

class PurchaseItem {
	public:
		static void purchaseItem();
};