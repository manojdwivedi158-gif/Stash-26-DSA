//Write a program that takes an integer as input and determines whether it is a multiple of both 3 and 7. 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    if(n%3==0 && n%7==0) cout<<" multiple of 3 and 7";
    else cout<<" not a multiple";
}