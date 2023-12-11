// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<n){
//             cout<<"* ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;

        while(j<=n){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
