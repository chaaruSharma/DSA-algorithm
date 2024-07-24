//n to 1

#include<iostream>
using namespace std;

int print(int n){
    cout<<n<<endl;
    if (n==1) return 0;
    else 
    print(n-1);
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    print(n);
    return 0;
}