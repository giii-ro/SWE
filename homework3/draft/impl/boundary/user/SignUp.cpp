#include <iostream>
#include <fstream>
#include "SignUp.h"

using namespace std;

void SignUp::signUp() {
    string name, ssn, id, password;
    in >> name >> ssn >> id >> password;

    userList.push_back(User::createUser(name, ssn, id, password));

    out << "> " << name << " " << ssn << " " << id << " " << password << "\n\n";
}
