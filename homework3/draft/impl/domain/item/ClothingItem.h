#pragma once
#include <string>
#include <vector>
using namespace std;

class ClothingItem {
	private: 
		string itemName;
		string sellerName; // check
		string companyName;
		int price;
		int quantity;
		double averageSatisfactionRating;
	public:
		ClothingItem() {
			this->itemName = "mockItem";
			this->sellerName = "mockSeller";
			this->companyName = "mockCompany";
			this->price = 123;
			this->quantity = 5;
			this->averageSatisfactionRating = 5.5;
		}
		void createClothingItem();
		void addNewRating(int rating);
		void decreaseQuantity();
		string getItemName();
		vector<string> getSellingItemInfo();
		vector<string> getPurchaseItemInfo();
		vector<string> getPurchaseRatingInfo();
		vector<string> getItemInfo();
};
