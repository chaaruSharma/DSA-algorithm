#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(    pow(a,2)==pow(b,2)+pow(c,2)){

        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x,y,z;
    cout<<"enter numbers";
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythagorus triplet";
    }
    else{
        cout<<"not a pythagorus triplet";
    }
    return 0;
}