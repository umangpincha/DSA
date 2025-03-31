#include<iostream>
using namespace std;
int main(){
    // bool val = true;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << val;
    //         val = !val;
    //     }
    //     cout << "\n";
    // }
    int n=5;
    // for(int i=1;i<=n;i++){
    //         //spaces
    //         for(int j=1;j<=n-i+1;j++){
    //             cout << " ";
    //         }
    //         //stars
    //         for(int j=1;j<=n;j++){
    //             cout << "*";
    //         }
    //         cout << "\n";
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        for(int j=2;j<=i;j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}