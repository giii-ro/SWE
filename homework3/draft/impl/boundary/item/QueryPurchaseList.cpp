#include <iostream>
#include <fstream>
#include "QueryPurchaseList.h"

using namespace std;

/*
	@output { sellerId, itemName, companyName, price, quantity, sumSatisfactionRating }
*/ 
void QueryPurchaseList::getPurchaseHistoryList() {
	User* user = User::searchUser(currentUserName);
	vector<ClothingItem*> itemList = user->getPurchaseClothingItemList();

	for (int j = 0; j < itemList.size(); j++) {
		vector<string> purchaseItemList = itemList[j]->getItemInfo();

		out << "> " << purchaseItemList[0] << " " << purchaseItemList[1] << " " << purchaseItemList[2] << " " << purchaseItemList[3] << " " << purchaseItemList[4] << " " << purchaseItemList[5] << "\n\n";
	}
}
