#include<iostream>
using namespace std;

void sum (int arr[6]){
    int s=0;
    
    for(int j=0;j<6;j++){
       
        s+= arr[j];
        
    }
    cout<<"the sum is "<<s;
    
}

int main(){
    int arr[6];
     cout<<"enter number";
        
    for (int i=0;i<6;i++){
       
        cin >>arr[i];
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    sum(arr);
    return 0;
}
