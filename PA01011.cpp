#include <iostream>
using namespace std;

int main()
{
    int number, limit;

    cout << "Enter the number: ";
    cin >> number;

    cout << "Enter the limit: ";
    cin >> limit;

    for(int i = 1; i <= limit; i++)
    {
        cout << number * i << " ";
    }

    cout << endl;

    return 0;
}