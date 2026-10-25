#include<iostream>
using namespace std;
int main(){
    int n=10829, rem, sum=0;
    while(n>0){
        rem=n%10;
        if(rem%2==0){
            sum= sum+rem;
        }
        n=n/10;
    }
    cout<<"the sum of odd digits in a number is = "<<sum;
    return 0;
}