// write a program to enter a number by user except multiple of 10

#include<iostream>
using namespace std;
int main(){
    do{
        int n;
       
        cout<<"enter a number";
        cin>>n;
        if(n%10==0){
            continue;
        }
        
        cout<<"you entered = "<< n<<endl;
    }
    
    while(true);
    return 0;
}