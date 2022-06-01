#include <iostream>
#include <fstream>
#include "Login.h"

using namespace std;

void Login::login() {
    string id, password;
    in >> id >> password;
    
    bool result = User::loginUser(id, password);

    out << "> " << id << " " << password << "\n";
}
