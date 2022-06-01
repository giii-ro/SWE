#include <iostream>
#include <fstream>
#include "PurchaseItem.h"

using namespace std;

void PurchaseItem::purchaseItem() {
	for (int i = 0; i < itemList.size(); i++) {
		if (itemList[i].getItemName() == currentItemName) {
			// 1. decreaseQuantity
			itemList[i].decreaseQuantity();

			// 2. Find CurrentUserInfo
			for (int j = 0; j < userList.size(); j++) {
				if (userList[j].getName() == currentUserName) {
					
					// 3. Create PurchaseHistory
					userList[j].addNewPurchaseHistory(itemList[i]);
					break;
				}
			}

			vector<string> purchaseItemInfo = itemList[i].getPurchaseItemInfo();
			out << "> " << purchaseItemInfo[0] << " " << purchaseItemInfo[1] << "\n\n";
			return;
		}
	}
}