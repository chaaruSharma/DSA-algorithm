#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter no of array elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"square root of numbers are"<<sqrt(arr[i])<<endl;
    }
    return 0;
}