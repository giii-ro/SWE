#include <iostream>
#include <fstream>
#include <vector>
#include "boundary/user/SignUp.h"
#include "boundary/item/ShowClothingItemList.h"
#include "boundary/item/SearchClothingItem.h"
#include "boundary/item/QueryPurchaseList.h"
#include "boundary/item/PurchaseItem.h"

#pragma warning(disable:4996)

using namespace std;

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit(int *flag);
void Test_getPurchaseHistoryList();
void Test_purchaseItem();

ifstream in(INPUT_FILE_NAME);
ofstream out(OUTPUT_FILE_NAME);

string currentUserName; // ���� �������� ���� ID�� �����ϴ� �������� -> �α��νÿ� �����Ѵ�.
string currentItemName; // ��ǰ ���� �˻����� ��ȸ ��ǰ ID -> ��ǰ ���� �˻��ÿ� �����Ѵ�.
vector<User> userList;
vector<ClothingItem> itemList;

int main() {
	doTask();
	return 0;
}

void doTask() {
	int menuCmd1 = 0, menuCmd2 = 0, finish = 0;
	while (!finish) {
		in >> menuCmd1 >> menuCmd2;
		if (menuCmd1 == 1) {
			if (menuCmd2 == 1) {
				out << "1.1. ȸ������\n";
				SignUp::signUp();
			}
			else if (menuCmd2 == 2) {
				out << "1.2. ȸ��Ż��\n";
				//Withdrawal::withDrawl();
			}
		}
		else if (menuCmd1 == 2) {
			if (menuCmd2 == 1) {
				out << "2.1. �α���\n";
				//Login::logIn();
			}
			else if (menuCmd2 == 2) {
				out << "2.2. �α׾ƿ�\n";
				//Logout::logOut();
			}
		}
		else if (menuCmd1 == 3) {
			if (menuCmd2 == 1) {
				out << "3.1. �Ǹ� �Ƿ� ���\n";
				//AddClothingItem::addClothingItem();
			}
			else if (menuCmd2 == 2) {
				out << "3.2. ��� ��ǰ ��ȸ\n";
				ShowClothingItemList::getMyClothingList();
			}
		}
		else if (menuCmd1 == 4) {
			if (menuCmd2 == 1) {
				out << "4.1. ��ǰ ���� �˻�\n";
				SearchClothingItem::searchClothingItem();
			}
			else if (menuCmd2 == 2) {
				out << "4.2. ��ǰ ����\n";
				//Test_purchaseItem();
				PurchaseItem::purchaseItem();
			}
			else if (menuCmd2 == 3) {
				out << "4.3. ��ǰ ���� ���� ��ȸ\n";
				//Test_getPurchaseHistoryList();
				QueryPurchaseList::getPurchaseHistoryList();
			}
			else if (menuCmd2 == 4) {
				out << "4.4. ��ǰ ���Ÿ����� ��\n";
				//NewSatisfactionRating::addNewRating();
			}
		}
		else if (menuCmd1 == 6) {
			if (menuCmd2 == 1) {
				out << "6.1. ����\n";
				programExit(&finish);
			}
		}
	}
}

void programExit(int *flag) {
	in.close();
	out.close();
	*flag = 1;
}

void Test_getPurchaseHistoryList() {
	currentUserName = "lee";
	User user = User::createUser("lee", "ssn", "id", "pwd");
	user.addNewPurchaseHistory(ClothingItem());
	userList.push_back(user);
}

void Test_purchaseItem() {
	currentUserName = "lee";
	currentItemName = "mockItem";
	User user = User::createUser("lee", "ssn", "id", "pwd");

	ClothingItem targetItem = ClothingItem();
	itemList.push_back(targetItem);
}