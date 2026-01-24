#include <iostream>

int main(){

    using namespace std;

    //1. char
    cout << "1. char" << endl;
    char c = 'a';
    cout << c << endl << endl;

    //2. casting
    //아스키코드로 나타내는 법
    cout << "2.casting" << endl;
    cout << (int)c << endl;
    cout << int(c) << endl << endl;

    //3. float, double
    cout <<"3. float, double" << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield);
        //float보다 double이 더 자세히 저장함을 보이기 위해 추가한 코드
        //숫자를 출력할 때 지수형태로 출력하지말고 무조건 소수점 형태로 출력하도록 하는 코드

    float a = 10.0/3.0;
    double b = 10.0/3.0;

    a = a * 1e6; //1e6 == 1 * 10^6
    b = b * 1e6;

    cout << "float : " << a << endl;
    cout << "double : " << b << endl << endl;

    //4. const
    cout << "4. const" << endl;
    /*오류남
    const int d = 10;
    cout << d << endl;
    d = 20;
    cout << d << endl;
    */

    return 0;
}