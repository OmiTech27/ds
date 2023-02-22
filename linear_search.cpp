#include <iostream>
using namespace std;
int main()
{
    int search, index, size;
    cout << "Enter the number of elements in an array: ";
    cin >> size;

    int arr[size];

    int getArrLength = sizeof(arr) / sizeof(int);

    cout << "Enter the elements: ";

    for (int i = 0; i < getArrLength; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> search;

    for (index = 0; index < size; index++)
    {
        if (arr[index] == search)
        {
            cout << search << " is present at location " << index + 1;
            break;
        }
    }
    if (index == size)
        cout << search << " isn't present in the array.";
    return 0;
}