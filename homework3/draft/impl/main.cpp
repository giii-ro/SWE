#include <iostream>
#include <fstream>
#include <vector>
#include "boundary/user/SignUp.h"
#include "boundary/user/Withdrawal.h"
#include "boundary/user/Login.h"
#include "boundary/user/Logout.h"
#include "boundary/item/ShowClothingItemList.h"
#include "boundary/item/SearchClothingItem.h"
#include "boundary/item/QueryPurchaseList.h"
#include "boundary/item/PurchaseItem.h"
#include "boundary/item/NewSatisfactionRating.h"
#include "boundary/item/AddClothingItem.h"

#pragma warning(disable:4996)

using namespace std;

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit(int* flag);
void Test_getPurchaseHistoryList();
void Test_purchaseItem();

ifstream in(INPUT_FILE_NAME);
ofstream out(OUTPUT_FILE_NAME);

string currentUserName; // 현재 접속중인 계정 ID를 유지하는 전역변수 -> 로그인시에 관리한다.
string currentItemName; // 상품 정보 검색에서 조회 상품 ID -> 상품 정보 검색시에 관리한다.
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
				out << "1.1. 회원가입\n";
				SignUp::signUp();
			}
			else if (menuCmd2 == 2) {
				out << "1.2. 회원탈퇴\n";
				Withdrawal::withdrawal();
			}
		}
		else if (menuCmd1 == 2) {
			if (menuCmd2 == 1) {
				out << "2.1. 로그인\n";
				Login::login();
			}
			else if (menuCmd2 == 2) {
				out << "2.2. 로그아웃\n";
				Logout::logout();
			}
		}
		else if (menuCmd1 == 3) {
			if (menuCmd2 == 1) {
				out << "3.1. 판매 의류 등록\n";
				AddClothingItem::addNewClothingItem();
			}
			else if (menuCmd2 == 2) {
				out << "3.2. 등록 상품 조회\n";
				ShowClothingItemList::getMyClothingList();
			}
		}
		else if (menuCmd1 == 4) {
			if (menuCmd2 == 1) {
				out << "4.1. 상품 정보 검색\n";
				SearchClothingItem::searchClothingItem();
			}
			else if (menuCmd2 == 2) {
				out << "4.2. 상품 구매\n";
				PurchaseItem::purchaseItem();
			}
			else if (menuCmd2 == 3) {
				out << "4.3. 상품 구매 내역 조회\n";
				QueryPurchaseList::getPurchaseHistoryList();
			}
			else if (menuCmd2 == 4) {
				out << "4.4. 상품 구매만족도 평가\n";
				NewSatisfactionRating::addNewRating();
			}
		}
		else if (menuCmd1 == 6) {
			if (menuCmd2 == 1) {
				out << "6.1. 종료\n";
				programExit(&finish);
			}
		}
	}
}

void programExit(int* flag) {
	in.close();
	out.close();
	*flag = 1;
}
