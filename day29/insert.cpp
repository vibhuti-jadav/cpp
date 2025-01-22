#include<iostream>

using namespace std;

void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert_sort(int arr[], int n){

    for(int i=1; i<n; i++){

        int key = arr[i];

        int j= i-1; 

        while(j>=0 && key < arr[j]){
                arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    print(arr, n);

}

int main(){

    int arr[5] = {24, 21, 23, 26, 22 };

    int n = sizeof(arr) / sizeof(arr[0]);

print(arr, n);

insert_sort(arr, n);

    return 0;

}
