#include <iostream>

using namespace std;

void func_A(void){
    cout << "This is func_A" << endl;
}

int func_B(int k){
    cout << "This is func_B, ";
    return k+1;
}


int main(){

    //function pointer
    //함수의 주소
    //함수 이름 그 자체
    //그 주소로 가면 함수가 실행하는 코드의 시작을 가리킴

    void (*pfA) (void); //function pointer pfA 선언

    pfA = func_A;
    pfA();

    int (*pfB) (int);
    pfB = func_B;
    cout << pfB(5) << endl;

    return 0;
}