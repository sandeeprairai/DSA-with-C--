// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace  std;

// int main(){

//     for(int i=0;i<15;i+=2){
//         cout<<i<<" ";

//         if(i&1){
//             continue;
//         }
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0;i<5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }



#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}