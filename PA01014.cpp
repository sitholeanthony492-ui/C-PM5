#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, originalNumber, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    while(originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, 3);
        originalNumber /= 10;
    }

    if(result == number)
    {
        cout << number << " is an Armstrong Number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong Number." << endl;
    }

    return 0;
}