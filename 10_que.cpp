//  Q10. Find the Factorial of a Number 

//  enter your number:5
//  120



#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fac *= i;
        
    }
    cout<<fac;
}