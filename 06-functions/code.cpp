#include<iostream>
#include<cmath>
using namespace std;

void product(int a , int b){ //here a,b are called parameters 
    cout << a*b << endl;
}

void oddEven(int a){
    if(a%2==0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }
}

int factorial(int n){
    int fact = 1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}


int isPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int binCoeff(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}




int main(){
    // product(10,20); //here 10,20 are called arguments
    // oddEven(2);
    // cout << factorial(3) << endl;
    // cout << isPrime(1);
    // cout << binCoeff(4,2);
    return 0;
}