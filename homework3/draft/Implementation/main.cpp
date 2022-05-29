#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void signUp();
void withDrawl();
void logIn();
void program_exit();

void logOut();

void addClothingItem();

void showClothingItemList();

FILE *in_fp, *out_fp;

int main() {
    FILE *in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE *out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}


void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0, is_program_exit = 0;
    while (!is_program_exit) {
        // 입력 파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행

        switch (menu_level_1) {
            case 1: {
                switch (menu_level_2) {
                    // 1.1 회원 가입
                    case 1: {
                        signUp();
                        break;
                    }
                    // 1.2 회원 탈퇴
                    case 2: {
                        withDrawl();
                        break;
                    }
                }
            }
            case 2: {
                switch (menu_level_2) {
                    // 2.1 로그인
                    case 1: {
                        logIn();
                        break;
                    }
                    // 2.2 로그아웃
                    case 2: {
                        logOut();
                        break;
                    }
                }
            }
            case 3: {
                switch (menu_level_2) {
                    // 3.1 판매 의류 등록
                    case 1: {
                        addClothingItem();
                        break;
                    }
                    // 3.2 등록 상품 조회
                    case 2: {
                        showClothingItemList();
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
                switch (menu_level_2) {
                    // 4.1 상품 정보 검색
                    case 1: {
                        break;
                    }
                    // 4.2 상품 구매
                    case 2: {
                        break;
                    }
                    // 4.3 상품 구매 내역 조회
                    case 3: {
                        break;
                    }
                    // 4.4 상품 구매만족도 평가
                    case 4: {
                        break;
                    }
                    
                }
            }
            case 5: {
                switch (menu_level_2) {
                    // TODO : 2인팀도 해당 되는지 확인 후, 구현
                    // 5.1 판매 상품 통계
                    case 1: {
                        break;
                    }
                }
            }
            case 6: {
                switch (menu_level_2) {
                    // 6.1. 종료
                    case 1: {
                        program_exit();
                        is_program_exit = 1;
                        break;;
                    }
                }

            }
        }
        return;
    }
}

void showClothingItemList() {

}

void addClothingItem() {

}

void logOut() {

}

void logIn() {

}

void withDrawl() {

}

void signUp() {
    char userType[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
            address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

    // 해당 기능 수행

    // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void program_exit() {
}
