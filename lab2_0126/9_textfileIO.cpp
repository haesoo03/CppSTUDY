#include <iostream>
#include <fstream>

int main(){
    using namespace std;

    ofstream outFile;
    outFile.open("9_My_information.txt");
    
    //사람 이름, 나이, 체중을 기록할 것.
    cout << "Name : ";
    char name[50];
    cin.getline(name, 50);
    outFile << name << endl;

    cout << "Age: ";
    unsigned short age;
    cin >> age;
    outFile << age << endl;

    cout << "Weight : ";
    double weight;
    cin >> weight;
    outFile << weight << endl;

    outFile.close();

    ifstream inFile;
    inFile.open("9_My_information.txt");
    if(inFile.is_open() == false){
        cout << "Unable to open the file" << endl;
        return -1;
    }

    inFile.getline(name, 50);
    inFile >> age;
    inFile >> weight;

    cout << name << "는 " << age << "살 이고, " << weight << "kg 이다." << endl;

    inFile.close();
    
    return 0;
}