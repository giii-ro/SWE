#include <iostream>
#include <fstream>
#include "QueryPurchaseList.h"

using namespace std;

/*
	@output { sellerName, itemName, companyName, price, quantity, averageSatisfactionRating }
*/ 
void QueryPurchaseList::getPurchaseHistoryList() {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == currentUserName) {
			vector<ClothingItem> itemList = userList[i].getPurchaseClothingItemList();

			for (int j = 0; j < itemList.size(); j++) {
				vector<string> purchaseItemList = itemList[j].getItemInfo();

				out << "> " << purchaseItemList[0] << " " << purchaseItemList[1] << " " << purchaseItemList[2] << " " << purchaseItemList[3] << " " << purchaseItemList[4] << " " << purchaseItemList[5] << "\n";
			}
		}
	}
}