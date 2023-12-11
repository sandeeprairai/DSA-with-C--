#include<iostream>
using namespace std;

int main(){
    int a=4;
    double b=1.50;
    char c='+';
    int sizeInteger=sizeof(a), sizeDouble=sizeof(b),
    sizeChar=sizeof(c);

    cout<<"Size of an integer is:"<<sizeInteger<<" bytes" <<endl;
    cout<<"Sie of a double is"<<sizeDouble<<" bytes"<<endl;
    cout<<"Size of a char is:"<<sizeChar<<" bytes"<<endl;


}