/*
check whether the given number is a palindrome or not
number==reverse of number
121==121
*/

#include<iostream>
using namespace std;
void palindrome(int b){
    int n=b;
    int rem,rev=0;
   while(n>0){
    rem=n%10;
    rev+=rem;
    n=n/10;
    if(n>0){
        rev*=10;
    }}
    cout<<"the reverse of "<<b<< " is "<< rev<<endl;
    if(rev==b){
        cout<<"it is a palindrome";
    }else{
        cout<<"it is not a palindrome ";
    }

}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    palindrome(n);
    return 0;
}