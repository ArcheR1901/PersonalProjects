#include <iostream>
using namespace std;

int main(){
    //pointer is a data type
    int a = 3;
    int* b = &a;     //b storing the address of a
    int** c = &b;
    cout << b << endl;//b prints the address 
    cout << *b << endl;      //*b prints (dereference) the value 
    cout << c << endl;
    cout << *c << endl;
    cout << **c << endl;
    return 0;
}