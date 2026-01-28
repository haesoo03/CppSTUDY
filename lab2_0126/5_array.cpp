#include <iostream>

int main(){

    using namespace std;

    //static array
    int pa[10];
    pa[5] = 10;
    cout << "pa[5]: " << pa[5] << endl;

    //dynamic array
    int *pb = new int[10];
    pb[5] = 20;
    cout << "pb[5]: " << pb[5] << endl;

    delete[] pb;

    return 0;
}