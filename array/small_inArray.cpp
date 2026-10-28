//find the small number in the given array
#include <iostream>
using namespace std;
int main(){
    int arr[5],min;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(min<=arr[i]){
            min=arr[i];
        }
        
    }
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }}
        cout<<"the smallest no is "<<min<<endl;
    return 0;
}