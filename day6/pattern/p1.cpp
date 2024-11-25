#include<iostream>

using namespace std;

int main(){


//first
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //second
       for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //third

       for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}