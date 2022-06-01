#include "../domain/user/User.h"

extern std::ifstream in;
extern std::ofstream out;
extern string currentItemName;
extern vector<ClothingItem> itemList;

class NewSatisfactionRating {
	public:
		static void addNewRating();
};