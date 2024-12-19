#include<iostream>
#include<string>
using namespace std;

class bike
{
    public:
    void color(){
        cout<<"color is red"<<endl;
    }
};

class bullet : public bike
{
    public:
    void modal(){
        cout<<"modal is latest"<<endl;
    }
};

int main(){

    bullet b1;
    
    b1.color();
    b1.modal();


    return 0;
}