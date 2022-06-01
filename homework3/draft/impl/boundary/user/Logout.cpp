#include <iostream>
#include <fstream>
#include "Logout.h"

using namespace std;

void Logout::logout() {
    string id = User::logoutUser();

    out << "> " << id << "\n\n";
}
