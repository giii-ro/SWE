#include <string>
#include <vector>

using namespace std;

class User {
    private:
        string name;
        string ssn;
        string id;
        string password;
    public:
        User(string name, string ssn, string id, string password) {
            this->name = name;
            this->ssn = ssn;
            this->id = id;
            this->password = password;
        }
        vector<string> getUserInfo() {
            return { name, ssn, id, password };
        }
//        vector<ClothingItem> getClothingItemList();
        void addNewPurchaseHistory();
        void createUser();
        void removeUser();
        bool validateUser();
        void logoutUser();
};