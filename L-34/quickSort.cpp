#include <iostream>

using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {

        if (arr[i] < pivot)
        {

            cnt++;
        }
    }

    int pivotIndex = s + cnt;

    swap(arr[s], arr[pivotIndex]);

    // arrange
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < arr[pivotIndex])
        {
            i++;
        }

        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {13, 9, 4, 5, 2};

    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    cout << endl;
    quickSort(arr, 0, n - 1);
    print(arr, n);
}

// Merge Sort can be implemented on linked lists without extra space.
// Since nodes can be easily rearranged by just updating pointers, 
// there’s no need to create temporary arrays for merging.
