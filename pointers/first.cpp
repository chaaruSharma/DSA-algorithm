// uses of reference variable dereference operator and pointers 

#include <iostream>
using namespace std;
int main(){
    int a= 32;
    int *ptr= &a;//prr stores the address of a
    char ch ='A';//ch stores A whose ascii value is 65
    char &cho=ch;//cho is the reference variable of ch which is A whose ascii value is same as 65
    cho+=a;//implicit type conversion happened when adding int and char data type  32+65= 97
    *ptr+=ch;//*ptr is a dereference operator who stores the value of a which is 32+97=129
    cout<<a<<" "<<ch<<endl;//the value of a changed due to * ptr which is derefrence operator value= 129 and ch=97 which is equal to a explicit type conversion happened
    return 0;
}