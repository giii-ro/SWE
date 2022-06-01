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
        static void removeUser(string id);
        bool validateUser(string password);
        static bool loginUser(string id, string password);
        static string logoutUser();
        void addNewPurchaseHistory(ClothingItem item);
        string getName();

        bool operator==(const string id);
};
