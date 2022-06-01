#include <iostream>
#include <fstream>
#include "Withdrawal.h"

using namespace std;

void Withdrawal::withdrawal() {
    string id;
    in >> id;

    User::removeUser(id);

    out << "> " << id << "\n";
}
