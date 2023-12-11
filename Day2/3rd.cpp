// #include<iostream>
// using namespace std;

// int main(void){
//     int a;
//     cout<<"Enter the value of a:";
//     cin>>a;

//     if(a>0){
//         cout<<"a is positive"<<endl;

//     }
//     else{
//         cout<<"a is not positive"<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    if(a>b){
        cout<<"a is greater than b:"<<endl;

    }
    if(b>a){
        cout<<"b is greater than a"<<endl;
    }
    return 0;
}