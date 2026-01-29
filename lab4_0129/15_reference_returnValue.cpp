#include <iostream>

const int& funcA(int& n){
    n = n+10;
    return n;
}

int main(){
    using namespace std;

    int k = 10;
    
    //int& rk = funcA(k); //함수의 파라미터가 참조변수가 아니라면 불가


    //cout << "k: " << k << endl;
    //cout << "rk: " << rk << endl; 
    //funcA(k) = 1000; //c++에서 가능. 만약 이게 불가능하도록 하고싶다면 함수 반환형 앞에 const 붙이기
    funcA(k);
    cout << "k: " << k << endl;


    return 0;
}