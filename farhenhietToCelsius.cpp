#include <iostream>
//#include <cmath>   used for mathematical calculations and consists of in built mathematical functions
using namespace std;

int main(){
    /*Initialization, declaration and basic output console commands*/
    cout << "Enter temperature in Fahrenheit: ";
    double tempInFahrenheit;
    cin >> tempInFahrenheit;
    double tempInCelsius;
    /*Logic*/
    tempInCelsius = ((tempInFahrenheit - 32) / (1.8));   //((tempInFahrenheit - 32) * (0.555)) also works but difference in decimal value
    /*Output*/
    cout << "Temperature in Celsius: " << tempInCelsius << endl;
    return 0;
}