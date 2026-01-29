#include <iostream>

using namespace std;

void funcA(int a=1, int b=2, int c=3){
    cout << a << " : " << b << " : " << c << endl;
}

void funcB(int a, int b = 2, int c = 3){
    cout << a << " : " << b << " : " << c << endl;
}

int main(){

    //funcA(10,20,30);
    funcA();
    funcA(7);
    funcA(7,8);

    funcB(9);
    funcB(9,10,11);
    //funcB(); //에러 -> a가 default가 없기 때문에 최소 하나는 넘겨야함

    return 0;
}