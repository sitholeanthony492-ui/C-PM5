#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Word backwards: ";

    for (int i = word.length() - 1; i >= 0; i--)
    {
        cout << word[i];
    }

    cout << endl;

    return 0;
}