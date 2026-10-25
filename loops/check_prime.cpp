//check whether the given no is prime or not

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    bool isPrime=true;

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"it is a prime number";
    }
    else{cout<<"it is not a prime number";}
    return 0;
}