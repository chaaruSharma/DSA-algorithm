// write a function to print the next character of the given character by the user
// a=b; A=B ; C=D; X=Y 

#include<iostream>
using namespace std;

void character( char c){
    int a=int(c);
    a+=1;
    cout<<char(a);
}
int main(){
    char c;
    cout<<"enter character";
    cin>>c;
    character(c);
    return 0;
}