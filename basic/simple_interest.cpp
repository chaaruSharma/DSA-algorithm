#include<iostream>
using namespace std;
int main(){
    float p,r,t,interest;
    cout<<"enter the principal amount ";
    cin>>p;
    cout<<"enter the rate amount ";
    cin>>r;
    cout<<"enter the time period ";
    cin>>t;
    interest=(p*r*t)/100;
    cout<<"the interest on the amount is = "<<interest;
    return 0;
}