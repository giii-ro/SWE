#include <iostream>
#include <fstream>
#include "NewSatisfactionRating.h"

using namespace std;

void NewSatisfactionRating::addNewRating() {
	int rating;
	in >> rating;

	ClothingItem* item = ClothingItem::searchClothingItem(currentItemName);

	item->addNewRating(rating);
	vector<string> purchaseRatingInfo = item->getPurchaseRatingInfo(rating);
	out << "> " << purchaseRatingInfo[0] << " " << purchaseRatingInfo[1] << " " << purchaseRatingInfo[2] << "\n\n";
}
