#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    int toPrint=1;
    cout<<"Enter the value of n:";
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<toPrint<<" ";
            toPrint+=1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}