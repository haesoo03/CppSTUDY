#include <iostream>
#include <climits>

int main(){

    using namespace std;
    
    unsigned short s_var;
    unsigned int i_var;
    unsigned long l_var;
    unsigned long long ll_var;

    cout << "short max : " << SHRT_MAX << endl;
    cout << "unsigned short max : " << USHRT_MAX << endl;
    cout << "int max : " << INT_MAX << endl;
    cout << "unsigned int max : " << UINT_MAX << endl;
    cout << "long max : " << LONG_MAX << endl;
    cout << "unsigned long max : " << ULONG_MAX << endl;
    cout << "long long max : " << LLONG_MAX << endl;
    cout << "unsigned long long max : " << ULLONG_MAX << endl;

    return 0;
}