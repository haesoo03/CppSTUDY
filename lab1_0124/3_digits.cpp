#include <iostream>

int main(){

    using namespace std;

    int a = 10; //10진수
    int b = 0x10; //16진수(16)
    int c = 010; //8진수 (8)

    cout << a << endl;
    cout << hex; //숫자 출력 형식을 16진수
    cout << b << endl;
    cout << oct; //숫자출력 형식을 8진수
    cout << c << endl;
    cout << dec;
    cout << a << " " << b << " " << c << endl;

    return 0;
}