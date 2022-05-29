#include <stdio.h>
#include <iostream>
#include "src/user/SignUp.h"

using namespace std;

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void program_exit();

FILE *in_fp, *out_fp;

int main() {
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}


void doTask() {
    int menuCmd1 = 0, menuCmd2 = 0, exitFlag = 0;
    while (!exitFlag) {
        fscanf(in_fp, "%d %d ", &menuCmd1, &menuCmd2);

        switch (menuCmd1) {
            case 1: {
                switch (menuCmd2) {
                    // 1.1 회원 가입
                    case 1: {
                        SignUp::signUp();
                        break;
                    }
                    // 1.2 회원 탈퇴
                    case 2: {
//                      Withdrawal::withDrawl();
                        break;
                    }
                }
            }
            case 2: {
                switch (menuCmd2) {
                    // 2.1 로그인
                    case 1: {
//                      Login::logIn();
                        break;
                    }
                    // 2.2 로그아웃
                    case 2: {
//                      Logout::logOut();
                        break;
                    }
                }
            }
            case 3: {
                switch (menuCmd2) {
                    // 3.1 판매 의류 등록
                    case 1: {
//                      AddClothingItem::addClothingItem();
                        break;
                    }
                    // 3.2 등록 상품 조회
                    case 2: {
//                      ShowClothingItemList::showClothingItemList();
                        break;
                    }
                    // TODO : 2인팀도 해당 되는지 확인 후, 구현
                    // 3.3 판매 완료 상품 조회
                    case 3: {
                        break;
                    }
                }
            }
            case 4: {
                switch (menuCmd2) {
                    // 4.1 상품 정보 검색
                    case 1: {
//                        SearchClothingItem::showClothingItemList();
                        break;
                    }
                    // 4.2 상품 구매
                    case 2: {
//                        TODO : PurchaseItem 내 메서드 수정 및 구매 내역 쪽 설계 변경
//                        PurchaseItem::purchaseItem();
                        break;
                    }
                    // 4.3 상품 구매 내역 조회
                    case 3: {
//                        QueryPurchaseList::listPurchaseHistory();
                        break;
                    }
                    // 4.4 상품 구매만족도 평가
                    case 4: {
//                        NewSatisfactionRating::addNewRating();
                        break;
                    }
                    
                }
            }
            case 5: {
                switch (menuCmd2) {
                    // TODO : 2인팀도 해당 되는지 확인 후, 구현
                    // 5.1 판매 상품 통계
                    case 1: {
                        break;
                    }
                }
            }
            case 6: {
                switch (menuCmd2) {
                    // 6.1. 종료
                    case 1: {
                        program_exit();
                        exitFlag = 1;
                        break;
                    }
                }

            }
        }
        return;
    }
}

void program_exit() {
    fprintf(out_fp, "6.1. 종료\n");
    exit(0);
}