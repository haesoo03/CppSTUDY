#include <iostream>

using namespace std;

int func(int k){

    return 10;
}

int func(int& k){
    return 20;
}

int func(int* k){
    return 30;
}

int main(){

    int m;
    cout << "999를 함수에 넣은 반환값: " << func((int *)999) << endl;
    //cout <<"변수 x를 함수에 넣은 반환값: " << func(m) << endl; //에러. 어떤 함수를 호출할지 컴퓨터가 판단 못함.

    return 0;
}