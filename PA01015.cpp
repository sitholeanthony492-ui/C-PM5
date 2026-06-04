#include <iostream>
using namespace std;

int main()
{
    int decimalNumber;
    int binary[32];
    int index = 0;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while(decimalNumber > 0)
    {
        binary[index] = decimalNumber % 2;
        decimalNumber /= 2;
        index++;
    }

    cout << "Binary number = ";

    for(int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }

    cout << endl;

    return 0;
}