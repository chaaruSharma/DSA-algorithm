//find largest value in array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest digit is "<<max;
    return 0;
}