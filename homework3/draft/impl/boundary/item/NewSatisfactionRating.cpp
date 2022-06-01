#include <iostream>
#include <fstream>
#include "NewSatisfactionRating.h"

using namespace std;

void NewSatisfactionRating::addNewRating() {
	int rating;
	in >> rating;

	for (int i = 0; i < itemList.size(); i++) {
		if (itemList[i].getItemName() == currentItemName) {
			itemList[i].addNewRating(rating);
			vector<string> purchaseRatingInfo = itemList[i].getPurchaseRatingInfo();
			out << "> " << purchaseRatingInfo[0] << " " << purchaseRatingInfo[1] << " " << purchaseRatingInfo[2] << "\n";
			return;
		}
	}

}