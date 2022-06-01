#include "ShowClothingListh.h"

vector<ClothingItem> ShowClothingList::getMyClothingList() {
	for (int i = 0; i < userList.size(); i++) {
		if (userList[i].getName() == currentUserName) {
			return userList[i].getClothingItemList();
		}
	}
}