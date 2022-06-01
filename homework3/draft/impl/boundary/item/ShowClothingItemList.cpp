#include <iostream>
#include <fstream>
#include "ShowClothingItemList.h"

using namespace std;

/*
	@output { itemName, companyName, price, quantity }
*/
void ShowClothingItemList::getMyClothingList() {
	User* user = User::searchUser(currentUserName);

	vector<ClothingItem> itemList = user->getSellingClothingItemList();

	for (int j = 0; j < itemList.size(); j++) {
		vector<string> sellingItemInfo = itemList[j].getSellingItemInfo();

		out << "> " << sellingItemInfo[0] << " " << sellingItemInfo[1] << " " << sellingItemInfo[2] << " " << sellingItemInfo[3] << "\n\n";
	}
}