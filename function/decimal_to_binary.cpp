#include<iostream>
using namespace std;

void dectoBin(int n){
    int rem=0,pow=1,bin=0;
    while(n>0){
        rem=n%2;
        bin+=rem*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<"decimal is "<<bin;
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    dectoBin(n);
    return 0;
}