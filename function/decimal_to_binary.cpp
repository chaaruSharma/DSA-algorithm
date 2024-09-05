#include<iostream>
#include<cmath>
using namespace std;

int convert(int x){
    int rem=0,code=0;
    while(x>0){
    rem=x%2;
    rem=rem*10+rem;
    if(x==1){
        code=rem*10+x;
    }
    x=x/2;
    
    }return code;
}

int main(){
    int n;
    cin>>n;
    cout<<convert(n);
    return 0;
}