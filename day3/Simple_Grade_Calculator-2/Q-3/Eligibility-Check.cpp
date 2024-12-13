#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 80){
        cout<<"Your Grade is A."<<" "<<"Excellent work! You are eligible for the next level";
    }
    else if (marks >= 70){
        cout<<"Your Grade is B"<<" "<<"Congratulations! You are eligible for the next level";
    }
    else if (marks >= 50){
        cout<<"Your Grade is C"<<" "<<"Congratulations! You are eligible for the next level";
    }
    else if (marks >= 40){
        cout<<"Your Grade is D"<<" "<<"Congratulations! You are eligible for the next level";
    }
    else{
        cout<<"your fail"<< " " <<"Please try again next time";
    }
    return 0;
}
