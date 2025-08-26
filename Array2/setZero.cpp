#include<iostream>
using namespace std;
int main(){
    
    
    int arr[4][4] = {1,1,1,1,1,0,1,1,1,1,0,1,1,0,0,1};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }

    int row [4] = {0};
    int colm [4] = {0};

   for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        if(arr[i][j] == 0){
            row[i] = 1;
            colm[j] = 1;
        }
    }
   }

   for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        if(row[i] == 1 || colm[j] == 1){
            arr[i][j] = 0;
        }
    }
   }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }

    return 0;
}