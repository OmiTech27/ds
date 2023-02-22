#include <iostream>
using namespace std;
int binarysearch(int a[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
int bubblesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {                                       // Passes
        for (int j = 0; j < n - i - 1; j++) // Numbers Increment
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
int traverseArray(int a[], int n)
{
    cout << "\nDisplaying Array Elements\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
void mergeArray(int a[], int b[], int n1, int n2)
{
    int n = n1 + n2, k = 0;
    int array[1000];
    for (int i = 0; i < n1; i++)
    {
        array[i] = a[i];
    }
    for (int j = n1; j < n; j++)
    {
        array[j] = b[k];
        k++;
    }
    traverseArray(array, n);
}
int *insert(int n, int array[], int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        array[i] = array[i - 1];
    array[pos - 1] = x;

    return array;
}
void deletee(int A[], int N, int Pos, int ITEM)
{
    for (int i = Pos; i < N; i++)
    {
        if (A[i] == ITEM)
        {
            A[i] = A[i + 1];
            N = N - 1;
        }
    }
    cout << ITEM << " is deleted from the array.";
    traverseArray(A, N);
}
int main()
{
    int ch, n;
    while (1)
    {
        int array[1000];
        cout << "\nEnter Size of An Array: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int m = i + 1;
            cout << "\nElement" << m << ": ";
            cin >> array[i];
        }
        cout << "\n1. For Traversing\n2. For Sorting\n3. For Searching\n4. For Merging\n5.For Inserting\n6.For Deletion\n ";
        cin >> ch;
        if (ch > 6)
        {
            cout << "Invalid input!!!!!";
        }
        switch (ch)
        {
        case 1:
            traverseArray(array, n);
            break;
        case 2:
            bubblesort(array, n);
            break;
        case 3:
            int key, pos;
            cout << "\nEnter Element to be searched";
            cin >> key;
            pos = binarysearch(array, n, key);
            if (pos == -1)
            {
                cout << "\nElement is not found";
            }
            else
            {
                cout << "\nElement is found at " << pos << " index";
            }
            break;
        case 4:
            int size2, array2[1000];
            cout << "\nEnter Size of An Array";
            cin >> size2;
            cout << "\nEnter Array Elements";
            for (int i = 0; i < size2; i++)
            {
                cin >> array2[i];
            }
            mergeArray(array, array2, n, size2);
            break;
        case 5:
            int x, p;
            cout << "Enter element to insert: " << endl;
            cin >> x;
            cout << "At what position ? ";
            cin >> p;
            insert(n, array, x, p);

            for (int i = 0; i < n + 1; i++)
            {
                cout << array[i] << " ";
                cout << endl;
            }
            break;
        case 6:
            int delitem, ps;
            cout << "\n Enter Element to be deleted:";
            cin >> delitem;
            pos = binarysearch(array, n, delitem);
            if (ps == -1)
            {
                cout << "\n Element not found";
            }
            deletee(array, n, ps, delitem);

            break;
        }
    }
    return 0;
}
