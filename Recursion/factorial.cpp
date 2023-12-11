#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==0)
        return 1;

    int smallerProblem=factorial(n-1);
    int bigggerProblem=n*smallerProblem;

    return bigggerProblem;

}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int ans=factorial(n);

    cout<<ans<<endl;

    return 0;
}
