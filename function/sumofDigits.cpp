// write a function to print the sum of digits of a number

#include<iostream>
using namespace std;
void sumofDig(int n){
    int b=n;
    int lastDig, sum=0;
    while(b>0){
        lastDig=b%10;
        sum+=lastDig;
        b/=10;
    }
    cout<<"sum of digits of "<<n<<" is "<<sum;

}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    sumofDig(n);
    return 0;
}