#include <iostream>

int main(){

    using namespace std;

    bool b = true;
    bool c = false;

    cout << boolalpha; //원래 명칭 : std::boolalpha (boolalpha도 std namespace의 객체.)
    cout << b << endl;
    cout << c << endl;

    cout << noboolalpha;
    cout << b << endl;
    cout << c << endl;

    return 0;
}