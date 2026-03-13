// Write a program that takes an integer representing a day number (1 to 7) and prints the corresponding day name. Assume the week starts with Monday.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your day no.";
    cin>>n;
    if(n==1) cout<<"Monday";
    else if(n==2)cout<<"Tuesday";
    else if(n==3)cout<<"wednesday";
    else if(n==4)cout<<"Thursdayday";
    else if(n==5)cout<<"Friday";
    else if(n==6)cout<<"Saturdayday";
    else cout<<"Sunday";
}