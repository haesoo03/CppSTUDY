#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string answer; //string이라는 class의 객체(변수) answer

    cout << "Enter answer: ";
    getline(cin, answer);

    cout << "your answer : " << answer << endl;

    cout << "Length : " << answer.length() << endl;
    cout << "first : " << answer[0] << endl;
    cout << "last : " << answer[answer.length()-1] << endl;

    return 0;
}