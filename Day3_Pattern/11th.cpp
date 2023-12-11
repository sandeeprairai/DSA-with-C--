// // #include<iostream>
// // using namespace std;

// // int main(){

// //     int n;
// //     cout<<"Enter the value of n:";
// //     cin>>n;

// //     int i=1;
// //     while(i<=n){
// //         char ch='A' + i - 1;
// //         int j=1;
// //         while(j<=n){
// //             cout<<ch<<" ";
// //             ch=ch+1;
// //             j=j+1;

// //         }
// //         i=i+1;
// //         cout<<endl;
// //     }
// //     return 0;

// // }

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     cout<<"Enter the value of n:";
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
// //         int j=1;
// //         while(j<=n){
// //             char ch='A' + i +j -2;
// //             cout<<ch<<" ";
// //             j=j+1;
// //         }
// //         i=i+1;
// //         cout<<endl;
// //     }
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A' + i - 1;
//         while(j<=i){
//             cout<<ch<<" ";
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
//     char ch='A';
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch=ch+1;
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
//      int n;
//      cout<<"Enter the value of n:";
//      cin>>n;
//      int i=1;
//      while(i<=n){
//         char ch='A' + i - 1;
//         int j=1;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch=ch+1;
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;

//      }
//      return 0;



// }


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     int row=1;

//     while(row<=n){
//         int col=1;

//         while(col<=row){
//             char ch=('A' + row + col -2);
//             cout<<ch<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }

// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=1;

    while(i<=n){
        char ch='A'+ n-i;
        int j=1;

        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}






