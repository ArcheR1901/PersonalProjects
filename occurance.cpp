#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    cout << endl;
    int a;
    cin >> a;
    int b;
    cout << "Enter a digit to count it's occurance: ";
    cout << endl;
    cin >> b;
    int count = 0;
    while (a > 0)
    {
        int temp;
        temp = a % 10;
        if (temp == b)
        {
            count++;
        }
        a /= 10;
    }
    cout << count;
}