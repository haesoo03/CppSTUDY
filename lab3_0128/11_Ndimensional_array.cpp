#include <iostream>


int sum_2d_arr(int _arr[][3], int _row){ //공식. 2차원 배열을 받을 때 열 크기만 적고 따로 인수로 행 크기를 받는다

    int sum(0);

    for(int r = 0; r < _row; r++){
        for(int c = 0; c < 3; c++){
            sum+= _arr[r][c];
        }
    }

    return sum;
}

int sum_3d_arr(int _arr[][2][3], int _row){ 

    int sum(0);

    for(int r = 0; r < _row; r++){
        for(int c = 0; c < 2; c++){
            for(int k = 0; k < 3; k++){
                sum+= _arr[r][c][k];
            }
        }
    }

    return sum;
}

int main(){

    using namespace std;

    int arr_2d[2][3] = {
        {1, 1, 1},
        {2, 2, 2}
    };

    int arr_3d[2][2][3] = {
        {{1,1,1}, {1,1,1}},
        {{2,2,2}, {2,2,2}},
    };

    cout << "sum 2d: " << sum_2d_arr(arr_2d, 2) << endl;
    cout << "sum 3d: " << sum_3d_arr(arr_3d, 2) << endl;


}