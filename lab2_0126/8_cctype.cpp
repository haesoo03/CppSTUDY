#include <iostream>
#include <cctype>

int main(){

    using namespace std;
    char ch;

    while(true){
        cin.get(ch);
        cin.get(); //내가 콘솔창에서 입력할 때 문자와 enter를 누를텐데,
                    //컴퓨터에선 enter도 문자로 인식하기 때문에 enter문자를 버리 위해 cin.get(); 으로 그냥 받고 버림.
        
        if(isalnum(ch)) cout << "alpha numeric" << endl;
        if(isalpha(ch)) cout << "alphabet" << endl;
        if(isblank(ch)) cout << "blank" << endl;
        if(isdigit(ch)) cout << "digit" << endl;
        if(isxdigit(ch)) cout << "hexa digit" << endl;
        if(ispunct(ch)) cout << "punctuation" << endl;
        if(islower(ch)) cout << "lower " << char(toupper(ch)) << endl;
        if(isupper(ch)) cout << "upper " << char(tolower(ch)) << endl;

        cout << endl;

        if(ch == '@') break;
    }

    return 0;
}