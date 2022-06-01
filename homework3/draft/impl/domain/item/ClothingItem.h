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
		double sumSatisfactionRating;
		int ratingCount;
	public:
		ClothingItem(string itemName, string sellerName, string companyName, int price, int quantity) {
			this->itemName = itemName;
			this->sellerName = sellerName;
			this->companyName = companyName;
			this->price = price;
			this->quantity = quantity;
			this->sumSatisfactionRating = 0;
			this->ratingCount = 0;
		}
		static void createClothingItem(string itemName, string companyName, int price, int quantity);
		void addNewRating();
		void createClothingItem();
		void addNewRating(int rating);
		void decreaseQuantity();
		string getItemName();
		double getAverageSatisfactionRating();
		vector<string> getSellingItemInfo();
		vector<string> getPurchaseItemInfo();
		vector<string> getPurchaseRatingInfo(int rating);
		vector<string> getItemInfo();
};
