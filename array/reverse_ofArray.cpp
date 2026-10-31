// write a code to print the reverse of an array by using another Copy array.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    for(int i=0;i<n;i++){
        int j=n-i-1;
        arr2[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }return 0;
}