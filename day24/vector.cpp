#include<iostream>
#include<vector>
using namespace std;


int main(){


vector <int>arr{2, 4, 6, 8}; 

cout<<"size of array..............."<<endl;

// size-method

cout << arr.size() << endl;

cout<<"element of this array......."<<endl;

// push-method

arr.push_back(19);

// pop method

arr.pop_back();

arr.insert(arr.begin()+1, 3);

for(int i=0; i<arr.size(); i++){

    cout << arr[i] << endl;
}




    return 0;
}