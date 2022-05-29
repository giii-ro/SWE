#include <iostream>
#include "SignUp.h"

#define MAX_INPUT_STRING 32

using namespace std;

extern FILE *in_fp, *out_fp;

void SignUp::signUp() {
    char userType[MAX_INPUT_STRING], name[MAX_INPUT_STRING], SSN[MAX_INPUT_STRING], address[MAX_INPUT_STRING], ID[MAX_INPUT_STRING], password[MAX_INPUT_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

    // 해당 기능 수행

    // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}
