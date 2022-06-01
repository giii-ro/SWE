#include <iostream>
#include <fstream>
#include "SearchClothingItem.h"

using namespace std;

/*
	@output { sellerName, itemName, companyName, price, quantity, averageSatisfactionRating }
*/ 
void SearchClothingItem::searchClothingItem() {
	string searchItemName;
	in >> searchItemName;

	for (int i = 0; i < itemList.size(); i++) {
		if (itemList[i].getItemName() == searchItemName) {
			vector<string> itemInfo = itemList[i].getItemInfo();

			currentItemName = searchItemName;

			out << "> " << itemInfo[0] << " " << itemInfo[1] << " " << itemInfo[2] << " " << itemInfo[3] << " " << itemInfo[4] << " " << itemInfo[5] << "\n";
			return;
		}
	}
}