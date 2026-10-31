#include<iostream>
using namespace std;

void search( int arr[], int n){
    int key=10;
for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"the index of key is "<<i<<"\n";
            return;
        }
    }
    cout<<"key not find";
    
} 

int main(){
    int n;
    cout<<"enter length of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
     search(arr,n);
    return 0;
}