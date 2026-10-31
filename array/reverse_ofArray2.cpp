// write a code to find the reverse of an array without using extra array or pointers

#include<iostream>
using namespace std;
int main(){
    // int arr[]={3,4,3,5,5,8,6,7};
    // int n=sizeof(arr)/sizeof(int);
    int n;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,temp=0;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++,end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }return 0;
}