#include <iostream>
using namespace std;

int main(){

    int sum = 0, rem = 0, reversedNumber = 0;
    for(int i = 10; i<100; i++){
        if(i%7==0){
           sum += i;
        }
    }
     cout << sum << endl;    //728

     while(sum > 0){
        rem = sum % 10;
        sum  /= 10;
        reversedNumber = reversedNumber * 10 + rem;
     }
     cout << reversedNumber << endl;
}