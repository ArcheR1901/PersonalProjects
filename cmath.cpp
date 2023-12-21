#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // double result = pow(12, 2);    //pow(a, b);    i.e a^b
    // cout << result;
    // return 0;
    /*initialization and declaration as well as prompt for user input*/
    cout << "Enter the radius of circle: " << endl;
    double radius, area;
    cin >> radius;
    /*Logic or mathematical expression*/
    area = pow (radius, 2) * M_PI;
    /*Output*/
    cout << area << endl;
    return 0;
}