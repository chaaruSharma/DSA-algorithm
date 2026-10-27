#include<iostream>
#include<cmath>
using namespace std;
void power(int a,int b){
    int result=pow(a,2)+pow(b,2)+2*a*b;
    cout<<result;
}
int main(){
    int a,b;
    cout<<"enter number a ";
    cin>>a;
    cout<<"enter number b ";
    cin>>b;
    power(a,b);
    
    return 0;
}