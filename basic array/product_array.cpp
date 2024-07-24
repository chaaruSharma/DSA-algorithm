#include<iostream>
using namespace std;
int main(){
    int arr[5];
     int pro=1;
    cout<<"enter elements";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=0;j<5 ;j++){
       
        pro*=arr[j];
    }
    cout<<"the product is "<< pro;
    return 0;
}