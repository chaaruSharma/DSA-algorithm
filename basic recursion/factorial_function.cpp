#include<iostream>
using namespace std;
void factorial(int n){
     int fact=1,rem;
    for(int i=n;i>=1;i--){

   
    rem=i;
    fact*=rem;}
   
    cout <<"the factorial is"<< fact;
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    factorial(n);
    return 0;
}