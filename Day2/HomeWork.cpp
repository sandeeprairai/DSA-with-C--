// #include<iostream>
// using namespace std;

// int main(){
//     int a=2;
//     int b=a+1;

//     if((a=3)==b){
//         cout<<a;
//     }
//     else{
//         cout<<a+1;
//     }
// }


// #include<iostream>
// using namespace std;


// int main(){

//     int a=9;
//     if(a==9){
//         cout<<"NINEY";
//     }
//     if(a>0){
//         cout<<"POSITIVE";
//     }
//     else{
//         cout<<"NEGATIVE";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a=2;
//     int b=a+1;

//     if((a=3)==b){
//         cout<<a;
//     }
//     else{
//         cout<<a+1;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a=24;

//     if(a>20){
//         cout<<"Love";
//     }
//     else if(a==24){
//         cout<<"Lovely";
//     }
//     else{
//         cout<<"Babber";
//     }
//     cout<<a;
// }



#include<iostream>
using namespace std;

int main(){

    char a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    if(a>='A' && a<='Z'){
        cout<<"This is upper case"<<endl;


    }
    else if(a>='a' && a<='z'){
        cout<<"this is lower case"<<endl;
    }
    else if(a>='0' && a<='9'){
        cout<<"This is a digit"<<endl;
    }
    return 0;
}