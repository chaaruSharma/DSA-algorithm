#include<iostream>
using namespace std;
// int factorial(int n,int r);

int factorial(int x){
 int fact=1;
   
    for(int i=x;i>0;i--){
        fact*=i;
    }
   return fact;
}

int main(){
    int n,r,a,b;
    cout<<"enter number";
    cin>>n;

    cout<<"enter number";
    cin>>r;

    a=factorial(n);
    b=factorial(n-r);

    cout<<a/b;

    return 0;
}