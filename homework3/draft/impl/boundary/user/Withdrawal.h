#pragma once
#include <vector>
#include "../domain/user/User.h"

extern std::ofstream out;
extern string currentUserName;
extern vector<User> userList;

class Withdrawal {
public:
	static void withdrawal();
};