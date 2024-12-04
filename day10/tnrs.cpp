#include<iostream>

using namespace std;

int sum(){
    int num;
    cout<<"num:";
    cin>>num;

    int sum=0;

       for(int i=0; i<num; i++){
        sum  += i;  
    }  

    return sum;
}

int main(){

    cout<<"sum is "<<sum() ;

    return 0;
}