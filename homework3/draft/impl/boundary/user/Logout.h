#pragma once
#include <vector>
#include "../../domain/user/User.h"
extern std::ifstream in;
extern std::ofstream out;

extern string currentUserName;

class Logout {
public:
    static void logout();
};
