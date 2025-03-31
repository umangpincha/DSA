#include<iostream>
using namespace std;
int main(){
    // TODO:
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout<< i << " ";
    //     }
    //     cout << "\n";
    // }

    // TODO:
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << "*" << " ";
    //     }
    //     cout << "\n";
    // }

    // TODO:
    // for(int i=4;i>=1;i--){
    //     for(int j=i;j>=1;j--){
    //         cout << "*" << " ";
    //     }
    //     cout << "\n";
    // }

    // TODO:
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << j;
    //     }
    //     cout << "\n";
    // }

    // TODO:
    // int n = 4;
    // char ch = 'A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << ch++;
    //     }
    //     cout << "\n";
    // }

    // TODO:
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     cout << "*";
    //     for(int j=1;j<=n-1;j++){
    //         if(i==1 || i==n){
    //             cout << "*";
    //         }else{
    //             cout << " ";
    //         }         
    //     }
    //     cout<<"*";
    //     cout << "\n";
    // }
    
    // TODO:
    // int n = 4;
    // for(int i=1;i<=n;i++){
        //spaces
    //     for(int j=1;j<=(n-i);j++){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout << "\n";

    // }
    
    // TODO:
    // int n=5;
    // int temp=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << temp++ << " ";
    //     }
    //     cout<<"\n";
    // }
    
    // TODO:
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(n-i);j++){
    //         cout << " ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout << "*";
    //     }
    //     cout<<"\n";
    // }
    
    // for(int i=n;i>=1;i--){
    //     //space
    //     for(int j=1;j<=n-i;j++){
    //         cout << " ";
    //     }
    //     //star
    //     for(int k=1;k<=2*i-1;k++){
    //         cout << "*";
    //     }
    //     cout<<"\n";
    // }

    
    // TODO:

    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }

        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout << "*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << "*";
        }
        cout<<"\n";
    }
    return 1;
}