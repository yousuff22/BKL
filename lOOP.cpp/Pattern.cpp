#include<iostream>
using namespace std;
void pattern(int n){
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j << " ";  
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";                   
    //     }
    //     cout<<endl;
    // }

    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";                   
    //     }
    //     cout<<endl;
    // }

    
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"* "<<" ";                   
        }
        cout<<endl;
    }

    //     for(int i=0; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<j<<" ";                   
    //     }
    //     cout<<endl;
    // }
        
        // for(int i=0; i<n; i++){
        //     //space
        // for(int j=0; j<n-i-1; j++){
        //     cout<<"  ";   
        //     }
        //     //star
        //     for(int j=0; j<2*i+1; j++){
        //         cout<<"* ";
        //     }
        //     //space
        //  for(int j=0; j<n-i-1; j++){
        //     cout<<"  " ;   
        //     }
        //    cout<<endl;
        // }
        //combination

        // for(int i=0; i<n; i++){
        //     //space
        //     for(int j=0; j<i; j++){
        //         cout<<"  ";
        //     }
        //     //star
        //     for(int j=0; j<2*n-(2*i+1); j++){
        //         cout<<"* ";
        //     }
        //     //space
        //     for(int j=0; j<=i; j++){
        //         cout<<"  ";
        //     }
        //     cout<<endl;

        //}

        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=i; j++){
        //         if((i+j)%2==0) cout<<"1 ";
        //         else cout<<"0 ";
        //     }
        //     cout<<endl;
        // }

        // for(int i=1; i<=n; i++){
        //     //Num
        //     for(int j=1; j<=i; j++){
        //         cout<<j<<"  ";
        //     }
        //     //Space
        //     for(int j=0; j<2*n-(2*i+1); j++){
        //          cout<<"  "<<" ";
        //     }
        //     //num
        //     for(int j=1; j<=i; j++){
        //         cout<<j<<"  ";
        //     }
        //     cout<<endl;
        // }
        // int a = 1;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<=i; j++){
        //         cout<<a<<" ";
        //         a++;
        //     }
        //     cout<<endl;
        // }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<=i; j++){
        //         cout<<(char)(j+65)<<" ";
        //     }
        //     cout<<endl;
        // }

        // for(int i=1; i<=n; i++){
        //     for(int j=0; j<=n-i; j++){
        //         cout<<(char)(j+65)<<" ";
        //     }
        //     cout<<endl;
        // }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<=i; j++){
        //         cout<<(char)(i+65)<<" ";
        //     }
        //     cout<<endl;
        // }

        // for(int i=0; i<n; i++){
        //     //space
        //     for(int j=0; j<n-i; j++){
        //         cout<<"  ";
        //     }
        //     char ch = 'A';
        //     int breakpoint = (2*i+1) / 2;

        //     for(int j=1; j<=2*i+1; j++){
        //         cout<< ch<<" ";
        //         if(j<= breakpoint) ch++;
        //         else ch--;
        //     }
        //     for(int j=0; j<n-i; j++){
        //         cout<<"  ";
        //     }
        //     cout<<endl;
        // }

        // for(int i = 0; i<n; i++){
        //     char ch = 'E';
        //     for(char ch = 'E' - i; ch<= 'E'; ch++){
        //         cout<<ch<<" ";
        //     }
        //     cout<<endl;
        // }
    

    

}
    int main(){
        int n;
        cout<<"Enter N :";
        cin>>n;
        pattern(n);
        return 0;
    }
