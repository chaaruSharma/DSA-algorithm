#include<iostream>
using namespace std;

void bintoDec(int n){
    int pow=1;
    int dec=0;
    int lastDig=0;
    while(n>0){
       lastDig= n%10;
        dec+=lastDig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<"decimal no is "<<dec<<endl;
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    bintoDec(n);
    return 0;
}