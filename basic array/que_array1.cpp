#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
           cout<<i<<" even value = "<<arr[i]<<endl;
        }
        
        else{
            arr[i]=arr[i]*2;
            cout<<i<<"odd value = "<<arr[i]<<endl;
        }
    }
    return 0;
}