//  Q8. Find the Sum of N Natural Numbers 

#include<iostream>
using namespace std;
int main(){
    int N,sum=0;
    cout<<"enter your number:";
    cin>>N;
    for(int i=1;i<=N;i++){
        sum += i;
    }
    cout<<sum;

}