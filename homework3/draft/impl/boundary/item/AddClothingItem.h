#pragma once
#include <vector>
#include "../../domain/item/ClothingItem.h"
#include "../../domain/user/User.h"

extern std::ifstream in;
extern std::ofstream out;

extern vector<ClothingItem> itemList;

class AddClothingItem {
	public:
		static void addNewClothingItem();
};