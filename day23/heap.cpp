#include<iostream>
#include<string.h>

using namespace std;


int main(){

int *arr;

    arr = new int[5];

if(arr == NULL){
    cout << "memory allocation is failed" << endl;
}
else {
    cout << "memory allocation is ssuccessfull" << endl;
}

    delete[] arr;

    arr = NULL;


if(arr == NULL){
    cout << "memory dellocation is successfull" << endl;
}
else {
    cout << "memory dellocation is failed" << endl;
}

    return 0;
}