#pragma once
#include "../domain/user/User.h"

extern std::ofstream out;
extern string currentUserName;
extern vector<User> userList;

class QueryPurchaseList {
	public:
		static void getPurchaseHistoryList();
};