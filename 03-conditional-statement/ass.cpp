#include<iostream>
using namespace std;
int main(){
    // TODO: Q1
    // int num;
    // cin >> num;
    // if(num < 0){
    //     cout << "Negative number";
    // }else if(num > 0){
    //     cout << "Positive number";
    // }else if(num == 0){
    //     cout << "0";
    // }

    // TODO: Q2
    // int leap_year;
    // if(leap_year % 400 == 0){
    //     return true;
    // }else if(leap_year%100 == 0){
    //     return false;
    // }else if(leap_year%10==0){
    //     return true;
    // }else{
    //     return false;
    // }

    // Q3: 0,63;
    // Q4: Bye

    // Q5 
    int num , armstrong_num , sum=0 ;
    cin >> num;
    int temp_val = num;
    while(temp_val != 0){
        int last_digit = temp_val % 10; 
        temp_val/=10; 
        sum = (sum + (last_digit * last_digit * last_digit)); 
    }
    if(sum == num){
        cout << "Armstrong number";
    }else{
        cout << "Not a armstrong number";
    }
    return 0;
}