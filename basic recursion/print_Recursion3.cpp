//1 to n without using extra perimeter
//if we use work after the call it will reverse the output
#include<iostream>
using namespace std;

int print(int n){
    
    if (n==0) return 0;//condition
    else 
    print(n-1);//call
    cout<<n<<endl;//work
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    print(n);
    return 0;
}