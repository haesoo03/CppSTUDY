#include <iostream>
#include <fstream>

int main(){

    using namespace std;
    //숫자들이 적혀있는 파일에서 숫자들을 모두 읽고 더하는 프로그램

    ifstream inFile;
    
    inFile.open("9_numbers.txt");
    if(inFile.is_open() == false){
        cout << "Unable to open the file" << endl;
        return -1;
    }

    cout << "num: ";

    double sum{0}, num;
    while(inFile.eof() == false){
        if(inFile.fail()){
            cout << "fail Reading" << endl;
            return -2;
        }
        inFile >> num;
        cout << num << " ";
        sum+=num;
    }
    //.eof말고 .good 써서 읽을게 있으면 실행하는 방법도 있다.

    cout << endl << "숫자들의 합 : " << sum << endl;

    inFile.close();

    return 0;
}