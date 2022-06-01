#include <iostream>
#include <fstream>
#include "SearchClothingItem.h"

using namespace std;

/*
	@output { sellerId, itemName, companyName, price, quantity, sumSatisfactionRating }
*/ 
void SearchClothingItem::searchClothingItem() {
	string searchItemName;
	in >> searchItemName;

	ClothingItem item = ClothingItem::searchClothingItem(searchItemName);
	vector<string> itemInfo = item.getItemInfo();

	currentItemName = searchItemName;

	out << "> " << itemInfo[0] << " " << itemInfo[1] << " " << itemInfo[2] << " " << itemInfo[3] << " " << itemInfo[4] << " " << itemInfo[5] << "\n\n";
}