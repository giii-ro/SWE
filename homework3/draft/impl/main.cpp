#include <iostream>
#include <fstream>
#include <vector>
#include "boundary/user/SignUp.h"

#pragma warning(disable:4996)

using namespace std;

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit();

ifstream in(INPUT_FILE_NAME);
ofstream out(OUTPUT_FILE_NAME);

vector<User> userList;

int main() {
	doTask();
	return 0;
}

void doTask() {
	int menuCmd1 = 0, menuCmd2 = 0, exitFlag = 0;
	while (!exitFlag) {
		in >> menuCmd1 >> menuCmd2;
		if (menuCmd1 == 1) {
			if (menuCmd2 == 1) {
				out << "1.1. 회원가입\n";
				SignUp::signUp();
			}
			else if (menuCmd2 == 2) {
				out << "1.2. 회원탈퇴\n";
				//Withdrawal::withDrawl();
			}
		}
		else if (menuCmd1 == 2) {
			if (menuCmd2 == 1) {
				out << "2.1. 로그인\n";
				//Login::logIn();
			}
			else if (menuCmd2 == 2) {
				out << "2.2. 로그아웃\n";
				//Logout::logOut();
			}
		}
		else if (menuCmd1 == 3) {
			if (menuCmd2 == 1) {
				out << "3.1. 판매 의류 등록\n";
				//AddClothingItem::addClothingItem();
			}
			else if (menuCmd2 == 2) {
				out << "3.2. 등록 상품 조회\n";
				//ShowClothingItemList::showClothingItemList();
			}
		}
		else if (menuCmd1 == 4) {
			if (menuCmd2 == 1) {
				out << "4.1. 상품 정보 검색\n";
				//SearchClothingItem::showClothingItemList();
			}
			else if (menuCmd2 == 2) {
				out << "4.2. 상품 구매\n";
				//TODO : PurchaseItem 내 메서드 수정 및 구매 내역 쪽 설계 변경
				//PurchaseItem::purchaseItem();
			}
			else if (menuCmd2 == 3) {
				out << "4.3. 상품 구매 내역 조회\n";
				//QueryPurchaseList::listPurchaseHistory();
			}
			else if (menuCmd2 == 4) {
				out << "4.4. 상품 구매만족도 평가\n";
				//NewSatisfactionRating::addNewRating();
			}
		}
		else if (menuCmd1 == 6) {
			if (menuCmd2 == 1) {
				out << "6.1. 종료\n";
				programExit();
				exitFlag = 1;
			}
		}
	}
}

void programExit() {
	in.close();
	out.close();
	exit(0);
}