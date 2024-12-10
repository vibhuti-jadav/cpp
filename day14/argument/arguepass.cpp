#include<iostream>

using namespace std;


int reference(int &n){
    n= 10;
    cout << n*n;
}



int const_reference(const int &n){
    cout << n*n;
}

int main(){


int a = 5; 
int b = 6;


 int *ptr1 = &a;
 int *ptr2 = &b;



    int arr[5] = {1, 2, 3, 4, 5};

   const_reference(a);

    return 0;
}