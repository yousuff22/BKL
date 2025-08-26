#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }


}
void ms(int arr[], int low, int high)
{
    // base Contition
    if (low >= high)
        return;
    // Dividing Two Arr
    int mid = (low + high) / 2;
    // left Part
    ms(arr, low, high);
    // Right Part
    ms(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main()
{

    int arr[] = {21, 23, 54, 76, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    ms(arr, 0, n - 1);

    return 0;
}