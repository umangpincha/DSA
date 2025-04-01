#include<iostream>
#include<cmath>
using namespace std;

void isPrime(int a , int n){
    if(n==1){
        cout<<"No prime numbers"<<endl;
        return;
    }
    for(int i=a;i<=n;i++){
        bool isPrime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
}

int main(){
    isPrime(2,13);
    return 0;
}