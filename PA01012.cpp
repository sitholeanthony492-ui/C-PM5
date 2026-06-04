#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    int largest = num1;

    if(num2 > largest)
    {
        largest = num2;
    }

    if(num3 > largest)
    {
        largest = num3;
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}