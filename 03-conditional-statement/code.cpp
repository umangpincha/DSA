#include<iostream>
using namespace std;
int main(){
    // int income;
    // float tax;
    // cout << "Enter Income (in lakhs):";
    // cin >> income;
    // if(income < 5){
    //     tax = 0;
    // }
    // else if(income <= 10){
    //     tax = income * 0.2;
    // }else{
    //     tax = income * 0.3;
    // }
    // cout << tax;
    int age;
    cin >> age;
    bool isAdult = (age > 18)? true:false;
    cout << isAdult;
}