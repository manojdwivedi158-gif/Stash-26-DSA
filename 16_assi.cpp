//Write a program that takes a person's age as input and determines if they are eligible to vote. 
// A person is eligible to vote if their age is 18 or greater.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your age";
    cin>>n;
    if(n>=18 && n<=75){
        cout<<"eligible for vote.";
    }
    cout<<" ";
}