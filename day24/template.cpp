#include<iostream>

using namespace std;

template <typename T>



    T sum(T x, T y){

            return x + y;
    }



int main(){

    cout<<sum <int> (5,5)<<endl;
    cout<<sum <float> (5.1,2.2)<<endl;


    return 0;
}