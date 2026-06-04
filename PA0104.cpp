#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "How many odd numbers do you want? ";
    cin >> n;

    int count = 0;
    int number = 1;

    while (count < n)
    {
        cout << number << " ";

        number += 2;
        count++;
    }

    return 0;
}