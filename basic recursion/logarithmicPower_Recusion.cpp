#include<iostream>
using namespace std;

log(int a, int b){
    if(b%2==0){
        if(b<=0){
        return 1;
        }
        return(log(a,(b/2)))*(log(a,(b/2)));
    }
    else{ if (b<=0){
        return 1;
    }
        return  (log(a,(b/2)))*(log(a,(b/2))*a);
    }
}

int main(){
    int a,b;
    cout<<"enter number";
    cin>>a>>b;
    log(a,b);
    cout<<"the power of a raise to the power b is : "<<log(a,b);
    return 0;
}