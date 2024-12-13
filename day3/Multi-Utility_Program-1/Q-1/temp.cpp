#include<iostream>

using namespace std;
int main(){

    int f,c;

    cout<<"eThe temperature in Celsius: ";
    cin>>c;

    f = (9.0/5.0 * c) + 32;

    cout<<"tempratuers is"<<c<<endl;
    cout<<"The temperature in Fahrenheit:"<<f<<endl;

    return 0;
}