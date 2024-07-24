#include<iostream>
using namespace std;

power(int a,int b){
    if(b==0){
        return 1;
    }
    return a* power(a,b-1);
}

int main(){
    int a,b;
    cout<<"enter number";
    cin>>a>>b;
    cout<<"the value of a raised to the power b is "<<power(a,b);
    return 0;
}