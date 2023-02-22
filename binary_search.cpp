// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid + 1;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
    int size;
    cout << "Enter the number of elements in an array: ";
    cin >> size;
    int arr[size], search;

    int getArrLength = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the elements: ";
    for (int i = 0; i < getArrLength; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> search;

    int result = binarySearch(arr, 0, getArrLength - 1, search);
    (result == -1)
        ? cout << "Element " << search << " is not present in array"
        : cout << "Element " << search << " is present at location " << result;
    return 0;
}
