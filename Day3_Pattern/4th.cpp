#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=1;
    int count=n*n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count-=1;
            j+=1;

        }
        cout<<"\n";
        i+=1;
    }
    return 0;
}