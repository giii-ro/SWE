#pragma once
#include <vector>
#include "../../domain/user/User.h"
extern std::ifstream in;
extern std::ofstream out;

extern vector<User> userList;

class SignUp {
    public:
        static void signUp();
};
