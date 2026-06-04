#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = num % 10;
    int firstDigit = num;

    int digits = 0;

    while(firstDigit >= 10)
    {
        firstDigit /= 10;
        digits++;
    }

    int power = pow(10, digits);

    int middlePart = (num % power) / 10;

    int newNumber = lastDigit * power +
                    middlePart * 10 +
                    firstDigit;

    cout << "Number after interchange = "
         << newNumber << endl;

    return 0;
}