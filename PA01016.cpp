#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, position, element;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position to insert: ";
    cin >> position;

    cout << "Enter element to insert: ";
    cin >> element;

    for(int i = size; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = element;
    size++;

    cout << "Array after insertion: ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}