#include <iostream>

using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    // copy arr;

    for (int i = 0; i < len1; i++)
    {

        first[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int j = 0; j < len2; j++)
    {

        second[j] = arr[k];
        k++;
    }

    // merge two sorted array

    k = s;
    int index1 = 0;
    int index2 = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] > second[index2])
        {

            arr[k++] = second[index2++];
        }
        else
        {
            arr[k++] = first[index1++];
        }
    }
    while (index1 < len1)
    {

        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    if (s >= e)
    {
        return;
    }

    // first half
    mergeSort(arr, s, mid);

    // second half
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{

    int arr[] = {43, 2, 1, 42, 4, 1, 4};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, n - 1);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}