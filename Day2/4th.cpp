// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i=i+1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     int sum=0;
//     int i=1;

//     while(i<=n){
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<"Sum from "<<i<<" to"<<n<<"="<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int sum=0;
//     int i=2;
//     while(i<=n){
//         if(i%2==0){
//             sum=sum+i;
//         }
//         i=i+1;
        
//     }
//     cout<<"Sum from"<<i<<" to"<<n<<"="<<sum<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     float farenheit;
//     cout<<"Enter the value of farenhit:"<<endl;
//     cin>>farenheit;
//     float celsius=(5.0/9) * (farenheit-32);
//     cout<<farenheit<<" F= "<<celsius<<" C"<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    int i=2;
    cout<<"Enter the value of n:";
    cin>>n;

    while(i<n){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
        i=i+1;
    }
    cout<<"Prime"<<endl;
    return 0;
}
