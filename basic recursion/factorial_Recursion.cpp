#include<iostream>
using namespace std;

fact(int n){
    if(n<1){
        return 1;
    }
    return n* fact(n-1);
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<"the factorial is "<<fact(n);
    return 0;
}