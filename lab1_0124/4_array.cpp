#include <iostream>

using namespace std;

int main(){

    //1. array
    char buf[20]; //최대 19글자 + null

    const int arSize = 20;
    char Buf[arSize]; //값이 변하지 않는 상수는 arraysize로 가능.
    
    cout << "Enter answer : ";
    cin.getline(Buf, arSize);

    cout << "Answer is : " << Buf << endl;

    //2. 문자열 array

    //3. 문자열 입력 - cin.getline(배열, 최대크기 + 널문자 1개)
    

    return 0;
}