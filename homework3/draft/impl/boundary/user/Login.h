#pragma once
#include <vector>
#include "../../domain/user/User.h"
extern std::ifstream in;
extern std::ofstream out;

extern string currentUserName; 

class Login {
    public:
        static void login();
    };
