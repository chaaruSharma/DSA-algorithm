/*
find the bionomial coefficient
n^Cr=fact(n)/fact(r)*fact(n-r)
*/

#include<iostream>
using namespace std;
int fact(int b){
    int a=b;
    int res=1;
    while(a>0){
         res=res*a;
        a=a-1;
          
    }
    cout<<"factorial of "<<b<<" is " <<res<<endl;
    return res;
}
int main(){
    int n,r;
    cout<<"enter number ";
    cin>>n;
    cout<<"enter number";
    cin>>r;
    int result=fact(n)/(fact(r)*fact(n-r));
    cout<<result;
    return 0;
}