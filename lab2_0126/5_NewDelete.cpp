#include <iostream>

using namespace std;

int main(){

    int *pi = new int; //int를 가리키는(변수 이름 따로 x) 포인터변수 pi

    *pi = 10;
    cout << *pi << endl;

    *pi = 20;
    cout << *pi << endl; 

    delete pi;


    return 0;
}