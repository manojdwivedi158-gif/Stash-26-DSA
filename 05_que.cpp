//  Q5. Find the Maximum of Three Numbers :

#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cout<<"enter your number:";
    cin>>i;
    cout<<"enter your number:";
    cin>>j;
    cout<<"enter your number:";
    cin>>k;
    if(i>=j && i>=k){
        cout<<"i is greatest";
    }
    else if(j>=k){
        cout<<"j is greatest";
    }
    else{ 
        cout<<"k is greatest";
    }
}