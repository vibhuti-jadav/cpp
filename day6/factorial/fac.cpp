#include<iostream>

using namespace std;

int main(){


  int num;
  cout<<"enter num";

  cin>>num;

    int factorial=1;

    for(int i=num; i>=1; i--){
        factorial *=i;
    }

    cout<<"factorial"<<" "<<factorial;

    return 0;
}