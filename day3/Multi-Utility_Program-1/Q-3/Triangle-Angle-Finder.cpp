#include<iostream>
using namespace std;

int main(){

int angle1, angle2, angle3;
 
    cout<<"Enter first angle of the triangle: ";
    cin>>angle1;

    cout<<"Enter second angle of the triangle: ";
    cin>>angle2;
    
    angle3 = 180-(angle1 + angle2);
    cout<<"The third angle will be: "<<angle3;
 
    return 0;
}