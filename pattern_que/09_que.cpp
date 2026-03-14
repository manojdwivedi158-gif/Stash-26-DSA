//  
//     for n=5
//  
//                * 
//              * ! *
//            * ! * ! *
//          * ! * ! * ! *
//        * ! * ! * ! * ! *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your name:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n-i;j++){    
    
//             cout<<" ";
//         }
//         for(int j=1;j<=i*2-1;j++){
//             if(j%2==0) cout<<"!";
//             else cout<<"*";
//         } cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i*2-1;j++){
//            cout<<j;

//         } cout<<endl;
//     }
// }





#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i*2-1;j++){
            if(j%2==0)  cout<<"! ";
            else cout<<"* ";
        }
        cout<<endl;
    }
}