#include <iostream>
#include <fstream>
#include "PurchaseItem.h"

using namespace std;

void PurchaseItem::purchaseItem() {
	ClothingItem* item = ClothingItem::searchClothingItem(currentItemName);

	// 1. decreaseQuantity
	item->decreaseQuantity();

	// 2. Find CurrentUserInfo
	User* user = User::searchUser(currentUserName);

	// 3. Create PurchaseHistory
	user->addNewPurchaseHistory(item);

	vector<string> purchaseItemInfo = item->getPurchaseItemInfo();
	out << "> " << purchaseItemInfo[0] << " " << purchaseItemInfo[1] << "\n\n";
}