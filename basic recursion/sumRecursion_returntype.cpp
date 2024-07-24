#include<iostream>
using namespace std;
sum(int n){
    // int t=0;
    if(n==0) return 0;
    return n+sum(n-1);
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    sum(n);
    cout<<"the sum is "<<sum(n);
    
    return 0;
}