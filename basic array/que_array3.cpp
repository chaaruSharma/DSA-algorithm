#include<iostream>
using namespace std;
int main(){
    int n,x=0,y=0,diff;
    cout<<"enter no of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            x+=arr[i];
        }
        else{
            y+=arr[i];
        }
         }diff=x-y;
cout<<"the difference bw the sum of even indices to the odd indices is : "<<diff;
return 0;
}