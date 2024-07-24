#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows & columns of array";
    cin>>m>>n;
    int a[m][n];
      int b[m][n];
        int c[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];}
            
        }
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];}
            
        }
        // for(int i=0;i<m;i++){
        // for(int j=0;j<n;j++){
        //     cin>>c[i][j];
            
        // }
        cout<<"input ends here";
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout<<endl;
        }
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<b[i][j]<<" ";
        }
        cout<<endl;
        }
// for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout <<c[i][j]<<" ";
//         }
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
        }}
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<"the sum of index : "<<i,j<<" is "<<c[i][j];
        }

        cout<<endl;
    }
    return 0;
}