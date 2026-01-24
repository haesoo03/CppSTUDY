#include <iostream>
#include <cmath>

//2 - 전위 선언법
/*
int add_two_numbers(int _a, int _b){
    return (_a+_b);
}
*/
//2 - 후위선언법
int add_two_numbers(int, int);

int main(){

    //1. 함수 호출
    /*
    using namespace std;
    cout << "제곱근을 구하고자 하는 숫자를 입력 : ";
    
    int n;
    cin >> n;
    
    double nsqrt = sqrt((double)n);
    cout << n << "의 제곱근은 " << nsqrt << endl;

    return 0;
    */

    //2. 함수 작성
    using namespace std;
    cout << "첫 번째 숫자를 입력하세요 : ";
    int a;
    cin >> a;
    cout << "두 번째 숫자를 입력하세요 : ";
    int b;
    cin >> b;

    int res = add_two_numbers(a,b);
    
    cout << a << "와 " << b << "를 합한 값은 " << res << endl;

    return 0;
}

int add_two_numbers(int _a, int _b){ //후위선언법
    return (_a+_b);
}