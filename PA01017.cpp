#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, position;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> position;

    for(int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Array after deletion: ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}