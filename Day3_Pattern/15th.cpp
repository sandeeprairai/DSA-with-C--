#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1,space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }
        j=i-1;
        while(j>=1){
            cout<<j<<" ";
            j=j-1;
        }
        i=i+1;
        cout<<endl;

    }
    return 0;
}