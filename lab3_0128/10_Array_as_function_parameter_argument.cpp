#include <iostream>

//int sum_arr_elements(int _arr[], int size) 도 동일
int sum_arr_elemetns(int* _arr, int size){ // <--function parameter

    int sum(0);
    for (int i = 0; i<size; i++){
        sum += _arr[i];
    }

    return sum;
}

int main(){
    
    using namespace std;

    int arr_a[5] = {1,2,3,4,5};

    int sum = sum_arr_elemetns(arr_a, 5);

    cout << "Array sum: " << sum << endl;

    return 0;
}