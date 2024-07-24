//swapping two numbers without using a temporary variable(only by using mathematical operation)
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the value of a and b is \t"<<a << b;
    return 0;
}