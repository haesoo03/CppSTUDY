#include <iostream>

int main(){
    
    //1.basic
    //std::cout << "Hello World!" << std::endl;

    //2.namespace
    /*
    using namespace std;
    cout << "apple" << endl;
    */

    //3. 변수 출력
    /*
    using namespace std;

    int n;
    cout << "n has ";
    //n = 25;
    cout << n << endl;
    */

    //4. 입력

    using namespace std;
    cout << "enter number : ";

    int n;
    cin >> n;
    cout << "The number you entered is " << n << endl;

    return 0;
}
