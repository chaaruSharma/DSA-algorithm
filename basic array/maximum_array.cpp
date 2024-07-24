#include<iostream>
using namespace std;
int main(){
    int arr[5];
    // int mx;
int n;
cout<<"enter elements";
cin>>n;

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    for(int j=0;j<n;j++){
        
        // if(arr[i]>mx){
        //     mx=arr{i};
        // }
        mx=max(mx,arr[j]);
    }
    
    cout<<"the maximum element in the array is : "<<mx;
    
    return 0;
}