#include<iostream>
#include<vector>
using namespace std;
// int bubblesort(vector<int> arr) {

//     int n = arr.size()-1;
//     int didswap = 0;

//     for(int i = n; i>=0; i--) {
//         for(int j = 0; j<i; j++) {
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 didswap = 1;
//             }
//         }
//         if(didswap == 0) break;
//     }


//     for(int i : arr) {
//         cout << i << " ";
//     }
// }

int insertionsort(vector<int> arr) {
    
    for(int i = 0; i<arr.size(); i++) {
        int j = i;
        while(arr[j] < arr[j-1] and j > 0){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
        }
    }
    for(int i : arr) {
        cout << i << " ";
    }
}

int partition(vector<int> &arr, int low, int high) {
    int pivott = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(arr[i] <= pivott and i<= high-1) {
            i++;
        }

        while(arr[j] > pivott and j <= low + 1) {
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);

    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr,int low, int high) {
    if(low < high) {
        int pivott = partition(arr,low,high);
        qs(arr,low, pivott-1);
        qs(arr,pivott+1,high);
    }
}

vector<int> quicksort(vector<int> arr) {
    qs(arr,0, arr.size()-1);
    return arr;
}

int main() {
    vector<int> arr = {21,12,4,78,45,65};
    vector<int> brr = quicksort(arr);

    
    return 0;
}