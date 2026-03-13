// Write a program that takes the lengths of the three sides of a triangle and determines its type:
// Equilateral: All three sides are equal.
// Isosceles: Exactly two sides are equal.
// Scalene: All three sides are different.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st :";
   cin>>a;
   cout<<"enter 2nd :";
   cin>>b;
   cout<<"enter 3rd :";
   cin>>c; 
   if((a+b)>c && (a+c)>b && (b+c)>a){
     if(a==b ||b==c) cout<<"equal";
     else if(a==b || b==c || c==a) cout<<"two sides are equal";
     else cout<<"all three sides are different";
   }
   else cout<<"it is not a triangle";
}

