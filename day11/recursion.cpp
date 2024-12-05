#include<iostream>

using namespace std;


int rec(int num){

    if(num <=1){
        return 1;
    }
    return num*rec(num-1); 
}

int three();

int two();

int four(int num){
 
    return num*three(num-1);
}

int three(int num){ 
     
    return num*two(); 
}

int two(int num){
    num = num -1;
    return num;
}

int one(){
    return 1;
}

int main(){

    int num = 4;

//   cout <<  rec(num);

cout << four(num);  

    return 0;
}