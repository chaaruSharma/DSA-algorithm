//1 to n

#include<iostream>
using namespace std;

void print(int i, int n){
    
     if (i>n) return;
 else
     cout<<i<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
int i=1;
    print(i,n);
    return 0;
}