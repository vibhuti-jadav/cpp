#include<iostream>
#include<string>

using namespace std;

class A{
    public:
    int x=12;
    int y=13;
    int z=14;
};

class B: public A 
{
    public:
    void call(){
        cout<<A::x;
    }
};

int main(){

B obj;

obj.call();

    return 0;
}

