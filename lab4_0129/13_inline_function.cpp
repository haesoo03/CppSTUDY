#include <iostream>

using namespace std;

inline double calc_sum(double a, double b){
    return (a+b);
}

int main(){

    cout << calc_sum(1.0, 2.0) << endl;
    cout << calc_sum(2.0, 2.0) << endl;
    cout << calc_sum(3.0, 2.0) << endl;

    return 0;
}