#pragma once
#include <vector>
#include "../domain/user/User.h"

extern std::ofstream out;
extern string currentUserName;
extern vector<User> userList;

class ShowClothingItemList {
	public: 
		static void getMyClothingList();
};