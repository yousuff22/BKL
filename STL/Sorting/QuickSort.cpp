#include <iostream>
#include <array>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int cnt = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (pivot >= arr[i])
        {
            cnt++;
        }
    }
    // place pivot at right position
    int pivotIndex = low + cnt;
    swap(arr[low], arr[pivotIndex]);

    // left and right sort..

    int i = low, j = high;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void Quicksort(int arr[], int low, int high)
{
    // base condi
    if (low >= high)
        return;

    int p = partition(arr, low, high);

    // left part
    Quicksort(arr, low, p - 1);
    // right part
    Quicksort(arr, p + 1, high);
}
int main()
{
    int arr[] = {12, 3, 45, 76, 3, 98, 2, 32, 44, 56, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}