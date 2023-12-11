// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             // you can also print 'A'+i-1 
//             // 'A' will get typecasted to 65
//             cout<< (char)(65+i-1)<<" ";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
//     return 0;
// }

 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A';
//         while(j<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int i=1;
    // char ch='A';
    while(i<=n){
        int j=1;
        char ch='A';
        while(j<=n){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;


        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}
