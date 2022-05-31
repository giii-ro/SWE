#include <iostream>
#include <fstream>
#include "SignUp.h"

using namespace std;

void SignUp::signUp() {\
    string name, ssn, id, password;
    in >> name >> ssn >> id >> password;

    cout << " name = " << name << " ssn = " << ssn << " id = " << id << " pwd = " << password << endl;
    //UserList* userList = UserList::getInstance();
    userList.push_back(User(name, ssn, id, password));

    out << "> " << name << " " << ssn << " " << id << " " << password << "\n";
}
