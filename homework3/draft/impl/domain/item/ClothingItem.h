#pragma once
#include <string>
#include <vector>
using namespace std;

class ClothingItem {
	private: 
		string itemname;
		string sellerName; // check
		string companyName;
		int price;
		int quantity;
		double averageSatisfactionRating;
	public:
		void createClothingItem();
		vector<string> getSellingItemInfo();
		void addNewRating();
};
