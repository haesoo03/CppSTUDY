#include <iostream>

int main(){
    using namespace std;

    int a = 55;
    int& ra = a;

    cout << "a : " << a << endl;
    cout << "ra : " << ra << endl << endl;
    //모두 55로 출력

    // ra = 78;
    // cout << "a : " << a << endl;
    // cout << "ra : " << ra << endl << endl;
    //모두 78로 출력

    // int& rra = a;
    // rra = 56;
    // cout << "a : " << a << endl;
    // cout << "ra : " << ra << endl;
    // cout << "rra: " << rra << endl << endl;
    //모두 56으로 출력

    // int& rrb = rra;
    // rrb=26;
    // cout << "a : " << a << endl;
    // cout << "ra : " << ra << endl;
    // cout << "rra: " << rra << endl;
    // cout << "rrb: " << rrb << endl;
    //모두 26으로 출력

    int k = 7;
    ra = 7;
    cout << "ra = k -> " << ra << endl;
    


    return 0;
}