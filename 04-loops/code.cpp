#include<iostream>
#include <cmath>
using namespace std;
int main(){
    // int sum =0;
    // for(int i=1;i<=5;i++){
    //     sum+=i;
    // }
    // cout << sum;

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=4;j++){
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    int n;
    cin >> n;
    // for(int i=n;i>=1;i--){
    //     cout << i << " ";
    // }
    // int temp = n , rem , sum=0;
    // while(temp!=0){
    //     rem=temp%10;
    //     cout << rem;
    //     // if(rem%2!=0){
    //     //     sum+=rem;
    //     // }
    //     temp/=10;
    // }
    // cout << "sum : " << sum << "\n";
    // n = 123
    // TODO: reverse the number
    // int revNum=0,lastDigit;
    // while(n!=0){
    //     lastDigit = n%10;
    //     revNum = revNum * 10 + lastDigit; //321
    //     n/=10;
    // }
    // cout << revNum;
    // TODO: PRIME NUMBER
    bool isPrime = true;
    // for(int i=2;i<=(n-1);i++){
    //     if(n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // TODO:optimized approach
    for(int i=2;i<=sqrt(n) ;i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    cout << isPrime;
    return 0;
}