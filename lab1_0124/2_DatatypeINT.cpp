#include <iostream>
#include <climits>

int main(){

    using namespace std;

    short s_var;
    int i_var;
    long l_var;
    long long ll_var;

    // cout << "short size : " << sizeof(short) <<endl;
    // cout << "int size : " << sizeof(int) <<endl;
    // cout << "long size : " << sizeof(long) <<endl;
    // cout << "long long size : " << sizeof(long long) <<endl;

    // cout << "short size : " << sizeof(s_var) <<endl;
    // cout << "int size : " << sizeof(i_var) <<endl;
    // cout << "long size : " << sizeof(l_var) <<endl;
    // cout << "long long size : " << sizeof(ll_var) <<endl;

    cout << "short max : " << SHRT_MAX << endl;
    cout << "short min : " << SHRT_MIN << endl;
    cout << "int max : " << INT_MAX << endl;
    cout << "int min : " << INT_MIN << endl;
    cout << "long max : " << LONG_MAX << endl;
    cout << "long min : " << LONG_MIN << endl;
    cout << "long long max : " << LLONG_MAX << endl;
    cout << "long long min : " << LLONG_MIN << endl;

    return 0;
}