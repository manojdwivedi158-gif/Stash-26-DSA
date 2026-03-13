// Write a program to calculate the total electricity bill based on the number of units consumed. The pricing is structured as follows:
// For units less than or equal to 100: ₹2 per unit.
// For units greater than 100 and less than or equal to 200: ₹3 per unit.
// For units greater than 200: ₹5 per unit:

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your units:";
    cin>>n;
    if(n<=100) cout<<n*2;
    else if(n<=200) cout<<n*3;
    else cout<<n*5;
}   