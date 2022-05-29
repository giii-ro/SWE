#include <string>
#include <vector>

using namespace std;

class User {
    private:
        string name;
        string registrationNumber;
        string id;
        string password;
    public:
//        vector<ClothingItem> getClothingItemList();
        void addNewPurchaseHistory();
        void createUser();
        void removeUser();
        bool validateUser();
        void logoutUser();
};