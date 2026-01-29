#include <iostream>

using namespace std;

struct Person{
    string name;
    unsigned int age;
};

Person* pdata = 0;

bool findPerson(string Name){

    for(int i = 0; i<3; i++){
        if(pdata[i].name == Name){
            return true;
        }
    }
    return false;
}

bool findPerson(unsigned int Age){
    for(int i = 0; i<3; i++){
        if(pdata[i].age == Age){
            return true;
        }
    }
    return false;
}

int main(){

    pdata = new Person[3];
    pdata[0] = {"James", 40};
    pdata[1] = {"minsoo", 27};
    pdata[2] = {"haesoo", 22};

    cout <<boolalpha; //bool 형을 true, false로 출력
    cout << "james: " << findPerson("James") << endl;
    cout << "27: " << findPerson(27) << endl;
    cout << "22: " << findPerson(22) << endl;
    cout << "gain: " << findPerson("gain") << endl;

    return 0;
}