//  Q13. Reverse a Number using a While Loop

#include<iostream>
using namespace std;
int main(){
    int n,num=0;
    cout<<"enter your number:";
    cin>>n;
    while(n>0){
        int ld = n % 10;
        num *= 10;
        num += ld;
        n /= 10;
    }
    cout<<num;
}