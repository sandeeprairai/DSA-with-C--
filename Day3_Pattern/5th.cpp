#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the valu of n:";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<" * ";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}