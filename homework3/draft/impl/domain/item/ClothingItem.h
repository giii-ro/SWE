#include <string>
using namespace std;

class ClothingItem {
	private: 
		string name;
		string sellerName; // check
		string companyName;
		int price;
		int quantity;
		double averageSatisfactionRating;
	public:
		void createClothingItem();
		void addNewRating();
};
