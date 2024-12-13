#include<iostream>
using namespace std;


int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 80){
        cout<<"Your grade is A. Excellent work!";
    }
    else if (marks >= 70){
        cout<<"Your Grade is B+" <<" "<<"Well done";
    }
    else if (marks >= 50){
        cout<<"Your Grade is C" <<" "<<"Good job";
    }
    else if (marks >= 35){
        cout<<"Your Grade is D" <<" "<<"You passed";
    }
    else{
        cout<<"your fail";
    }
    return 0;
}