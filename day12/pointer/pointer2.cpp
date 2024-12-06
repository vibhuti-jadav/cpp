#include<iostream>

using namespace std;

int main(){


    int arr[5] = {1, 2, 3, 4, 5};

    int *parr[5];


    for(int i=0; i<5; i++){
        parr[i] = &arr[i];
    }

    for(int i=0; i<5; i++){
        cout << "address: " << parr[i] << " value: " << *parr[i] << endl;
    }


    return 0;
}