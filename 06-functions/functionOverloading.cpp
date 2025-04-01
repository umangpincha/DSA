#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}
double sum(double a , double b){
    return a+b;
}


int main(){
    cout<<"Function Overloading"<<endl;
    cout << sum(1,2)<< endl;
    cout << sum(1.5,2.5);
    return 0;
}