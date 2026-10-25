#include <iostream>
using namespace std;
int main(){
    float pencil,pen,eraser,bill,gst;
    cout<<"enter the price of pencil";
    cin>>pencil;
    cout<<"enter the price of eraser = ";
    cin>>eraser;
    cout<<"enter the price of pen = ";
    cin>>pen;

    bill=pencil+eraser+pen;
    cout<<"the bill price is = "<< bill<<endl;
    gst=bill*18/100;
    cout<<"the gst on the bill is = "<< gst <<endl;
    return 0;
}