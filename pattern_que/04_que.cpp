//
//      for n=5  
//
//              * 
//            * *
//          * * *
//        * * * *
//      * * * * *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
         cout<<endl;
    }
}