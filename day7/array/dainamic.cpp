
#include<iostream>

using namespace std;

int main(){

    int a = 10;

    a = 15;

    int arr[5]; 

    for(int j=0; j<5; j++){
        cout << "arr[" << j << "]: " ;
        cin >> arr[j];
    }

    arr[2] = 101;
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

     return 0;

}


