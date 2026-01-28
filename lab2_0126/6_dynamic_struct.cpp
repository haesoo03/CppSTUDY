#include <iostream>

struct things{

    char name[20];
    double weight;
    double price;
};


int main(){

    using namespace std;
    //c 방식
    //struct things* pt = (struct things*)malloc(sizeof(struct things));
    //free(pt)

    //C++ 방식
    things* pt = new things;
    delete pt;

    cout << "Enter name: ";
    cin.get(pt->name, 20);

    cout <<"Enter weight: ";
    cin >> pt->weight;

    cout << "Enter Price: ";
    cin >> (*pt).price; //(*pt)로 하면 pt가 가리키는 그 공간 자체 값을 의미

    cout << endl << "name: " << (*pt).name << endl;
    cout << "weight: " << pt->weight << endl;
    cout << "price: " << pt->price << endl;
    
    return 0;
}