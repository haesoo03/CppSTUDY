#include <iostream>

int main(){

    using namespace std;

    //range based for loop를 이용해 배열 최댓값 찾기
    int array[10] = {3, 19, 40, 2005, 9, 15, 33, 2000, 55, 7};
    int max = array[0];

    for(int i: array){
        if(max < i){
            max = i;
        }
    }

    cout << "배열 array 요소 중 최댓값 : " << max << endl;
   
    //동적배열을 만들어서 range based for loop이 되는가? 
    /*
    int *Arr = new int[10];

    for(auto k: *Arr){
        cout << k << endl;
    }

    delete[] Arr;
    */
    // 결론 : 안된다. 정적배열은 컴퓨터가 배열 크기, 시작 위치와 끝 위치를 정확히 알지만 동적배열은 알 수 없기 때문.

    return 0;
}