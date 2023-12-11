// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;

//     cout<<"printing count from 1 to n:"<<endl;

//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;

//     int sum=0;

//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int n=10;
//     int a=0;
//     int b=1;

//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n;i++){
//         int nextNumber=a+b;
//         cout<<nextNumber<<" ";

//         a=b;
//         b=nextNumber;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the value of n:"<<endl;

//     cin>>n;

//     bool isPrime=1;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"Not a Prime Number"<<endl;
//     }
//     else{
//         cout<<"is a Prime Number"<<endl;
//     }

// }


#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){

        cout<<" HI "<<endl;
        cout<<" Hey "<<endl;
        continue;

        cout<<"Reply toh karde"<<endl;
    }
}