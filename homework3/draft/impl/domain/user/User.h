#pragma once
#include <string>
#include <vector>
#include "../item/ClothingItem.h"

using namespace std;

class User {
    private:
        string name;
        string ssn;
        string id;
        string password;
        vector<ClothingItem> sellingItemList; 
        vector<ClothingItem> purchaseItemList;
    public:
        User(string name, string ssn, string id, string password) {
            this->name = name;
            this->ssn = ssn;
            this->id = id;
            this->password = password;
        }
        vector<ClothingItem> getSellingClothingItemList();
        vector<ClothingItem> getPurchaseClothingItemList();
        static User createUser(string name, string ssn, string id, string password);
        void removeUser(); // userList 클래스 메서드인듯함.. 
        bool validateUser();
        void logoutUser();
        void addNewPurchaseHistory(ClothingItem item);
        string getName();
};
