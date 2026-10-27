// write a function to find the factorial of a number

#include<iostream>
using namespace std;
int fact(int a){
    int res=1;
    while(a>0){
        
        res=res*a;
        a=a-1;
        
    }return res;
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
   cout<< fact(n);
    return 0;
}