#include<iostream>
#include <cmath>
using namespace std;
int main(){
    // int num,fact=1;
    // cin >> num;
    // if(num==0 || num==1){
    //     cout<<"1"<<endl;
    // }
    // for(int i=1;i<=num;i++){
    //     fact*=i;
    // }

    // TODO: ARMSTRONG 123 = (1*1*1)+(2*2*2)+(3*3*3) = 1+ 8 + 27=36
    // int num,lastDig,sum=1;
    // cin >> num;
    // int tempVal=num;
    // while(num>0){
    //     lastDig%=10;
    //     sum+=(lastDig*lastDig*lastDig);
    //     num/=10; 
    // }
    // if(sum == tempVal){
    //     cout<<"Armstrong number"; 
    // }else{
    //     cout<<"Armstrong number";
    // }

    // TODO: PRIME NUMBER FROM 2 TO N
    // int n;
    // bool isPrime=1;
    // cin>>n;
    // for(int i=2;i<=n;i++){
    //     for(int j=2;j<=sqrt(i);j++){
    //         if(i%j==0){
    //             isPrime=0;
    //             break;
    //         }
    //     }
    //     if(isPrime){
    //         cout << i << " " << "\n";
    //     }
    //     isPrime=1;
    // }

    // TODO: FIBONACCI NUMBER
    int n , firstNum=0 , secondNum=1;
    cin>>n;
    cout << firstNum << " " << secondNum << " ";
    for(int i=1;i<=n;i++){
        int third=firstNum+secondNum;
        cout << third << " ";
        firstNum=secondNum; 
        secondNum=third; 
    }
    return 0;
}