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
		ClothingItem() {
			this->itemname = "mockItem";
			this->sellerName = "mockSeller";
			this->companyName = "mockCompany";
			this->price = 123;
			this->quantity = 1;
			this->averageSatisfactionRating = 5.5;
		}
		void createClothingItem();
		void addNewRating();
		string getItemName();
		vector<string> getSellingItemInfo();
		vector<string> getItemInfo();
};
