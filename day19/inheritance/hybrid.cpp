#include<iostream>

using namespace std;

class A
{
    public:
    void top(){
        cout<<"top side A"<<endl;
    }
};
class B : public A
{
    public:
    void left(){
        cout<< "left side B "<<endl;
    }

};
class C : public A
{
    public:
    void right(){
        cout<<"right side c"<<endl;
    }
};

class D : public B, public C{
    public:
    void bottom(){
        cout<<"bottom side d"<<endl;
    }
};

int main(){

     A a1;
    B b1;
    C  c1;
    D d1;


    a1.top();
   b1.left();
   b1.top();
   c1.right();

   cout<<"**********************"<<endl;

   d1.left();
   d1.right();
   d1.bottom();
   d1.B::top();

    return 0;
}