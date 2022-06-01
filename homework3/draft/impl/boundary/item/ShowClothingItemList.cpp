#include <iostream>
#include <fstream>
#include "ShowClothingItemList.h"

using namespace std;

/*
	@output { itemName, companyName, price, quantity }
*/
void ShowClothingItemList::getMyClothingList() {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == currentUserName) {
			vector<ClothingItem> itemList = userList[i].getSellingClothingItemList();

			for (int j = 0; j < itemList.size(); j++) {
				vector<string> sellingItemInfo = itemList[j].getSellingItemInfo();

				out << "> " << sellingItemInfo[0] << " " << sellingItemInfo[1] << " " << sellingItemInfo[2] << " " << sellingItemInfo[3] << "\n\n";
			}
			return;
		}
	}
}