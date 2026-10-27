/* write a function to print the prime function */

#include <iostream>
#include <cmath>
using namespace std;
int prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int n;
    // bool isPrime;
    cout<<"enter number ";
    cin>> n;
    cout<<prime(n);
    // cout<<isPrime;
    return 0;
}