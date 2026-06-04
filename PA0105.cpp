#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    {
        number = -number;
    }

    cout << "Absolute Value = " << number << endl;

    return 0;
}