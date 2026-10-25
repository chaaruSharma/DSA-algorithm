#include<iostream>
using namespace std;
int main(){
    int n=12345,rem,res=0;
    while(n>0){
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    cout<<"the reverse digit is = "<<res;
    return 0;
}