#include<iostream>

using namespace std;

int main(){

    int num=5;
    int *p1 , **p2;

    p1=&num;
    *p2=p1;
    cout<<p1<<endl;
    cout<<*p2<<endl; // **-values,*-address.

    return 0;

}