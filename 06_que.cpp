// Q6. Grade Card Program (Based on Marks) 


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter your marks:";
    cin>>m;
    if(m>100){
        cout<<"error";

    }
    else if(m>=80){
        cout<<"first division";
    }
    else if(m>=60){
        cout<<"second devision";
    }
    else if(m>=34){
        cout<<"third division";
    }
    else{
        cout<<"fail";
    }
}