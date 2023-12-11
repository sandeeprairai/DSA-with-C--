// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int row=1,toPrint=1;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//             cout<<toPrint<<" ";
//             toPrint=toPrint+1;
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int row=1,toPrint=1;
//     while(row<=n){
//         int column=1;
//         toPrint=row;
//         while(column<=row){
//             cout<<toPrint<<" ";
//             toPrint=toPrint+1;
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of value n:";
    cin>>n;
    int row=1;
    while(row<=n){
        int column=row;
        while(column<row*2){
            cout<<column<<" ";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}