#include<iostream>

using namespace std;

class hospital{

    public:
    void medicin(){
        cout<< "this is a new stock medicin"<<endl;
    }
};

class staff:public hospital
{
    public:
    void legel(){
        cout<<"this is a opration staff"<<endl;
    }
};

class enbulance:public staff
{
    public:
    void calc(){
        cout<<"this is a enbulance"<<endl;
    }
};

int main(){

    staff s1;
    enbulance e1;

    s1.medicin();
    s1.legel();

    e1.calc();
    e1.legel();


    return 0;
}