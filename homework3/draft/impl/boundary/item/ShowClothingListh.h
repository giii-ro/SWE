#include <vector>
#include "../domain/user/User.h"

extern string currentUserName;
extern vector<User> userList;

class ShowClothingList {
	public: 
		vector<ClothingItem> getMyClothingList();
};