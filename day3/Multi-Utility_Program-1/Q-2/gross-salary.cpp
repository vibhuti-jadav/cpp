#include<iostream>

using namespace std;

int main(){

    int salary,gross,hra,da,ta;

    cout<<"enter an salary";
    cin>>salary;

    hra=salary*10/100;
    da=salary*5/100;
    ta=salary*8/100;

    gross=salary+hra+da+ta;

    cout<<"Gross salary"<<gross<<endl;

    return 0;
}