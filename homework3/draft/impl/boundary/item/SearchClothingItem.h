#pragma once
#include <vector>
#include <string>
#include "../domain/item/ClothingItem.h"

extern std::ifstream in;
extern std::ofstream out;
extern vector<ClothingItem> itemList;

class SearchClothingItem {
	public:
		static void searchClothingItem();
};