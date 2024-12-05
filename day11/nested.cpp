#include<iostream>

using namespace std;

int name2(){
    cout<<"are they second step"<<endl;
}

int name1(){
    cout<<"aare they first step"<<endl;
       name2();
}


int main(){
    name1();
 
    return 0;
}