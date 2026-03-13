//  Q12. Find the Sum of Digits of a Given Number using a Loop

//  enter your number:5647
//  22


#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter your number:";
    cin>>n;
    while(n>0){
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }
    cout<<sum;
}