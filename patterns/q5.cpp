/*
A
BC
DEF
GHIJ
*/

#include<iostream>
using namespace std;
int main(){
    char a='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
          
            cout<<char(a);
            a=a+1;
        }
        cout<<endl;
    }return 0;
}