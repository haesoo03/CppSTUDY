#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

//c언어에서 있던 헤더파일을 c++에서 쓸 때 거의 앞에 c를 붙임
//즉 c언어에서 <string.h>라는 헤더가 있었다

using namespace std;

char* getname(void){ //이름이 문자열이니까 문자열의 첫번째 주소를 반환받을 수 있도록
    char temp[101]; //최대 길이의 배열을 하나 만들고
    cout << "Enter name: ";
    cin >> temp;

    char* pn = new char[strlen(temp)+1]; //현재 temp에 있는 문자열의 길이만큼 동적 배열을 생성하여
    strcpy(pn, temp); //temp에서 가져와서 pn에 저장하고(그럼 문자열 길이에 딱맞는 배열)
    
    return pn; //pn 반환
}

int main(){

    char* name;

    name = getname();

    cout << "Name: " << name << endl;
    cout << "Name adress: " << (int *)name << endl;
        //name: 문자열 주소를 가진 변수, 이 주소에 가서 문자열을 출력
        //(int *)name : int를 담고있는 포인터로 casting -> 문자열로 해석이 불가하니 name의 주소를 넘겨주게 됨.
    //여러게 받았다 가정하고 중간 생략

    delete[] name;

    return 0;
}