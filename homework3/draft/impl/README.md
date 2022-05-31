## 0. 개발 환경
- Visual studio 2017+(2022)

## 1. Impl 디렉토리 구조

### domain
- Entity들을 Domain별로 나눠서 담당한다.

### boundary 
- 비즈니스 로직과 파일 입출력을 담당한다.

## 2. 구현 세부 사항
- 데이터를 관리하는 디렉토리 (ex: data) 에서 데이터를 관리해야하나, 편의를 위해 관리하는 데이터 리스트들을 main.cpp 전역변수로 선언하고, 외부 파일에서 필요할 때마다 extern 변수로 선언하여 사용한다.  
&nbsp;

- 파일 입출력은 편의를 위해서 fstream의 ifstream과 ofstream을 사용한다.
  - 파일 입력 
    ```
    extern std::ifstream in; // 헤더파일에 선언
    string id, pwd; 
    in >> id >> pwd; // 파일에서 한 줄 READ, 기존의 cin 방식과 같이 사용 가능 
    ```
  - 파일 출력
    ```
    extern std::ofstream out; // 헤더파일에 선언
    string id, pwd;
    out << id << pwd <<"\n"; // 파일에서 한 줄 WRITE, '<<' 연산자를 이용해 공백, 개행 사용 가능
    ```