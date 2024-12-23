#include<iostream>
#include<string>

using namespace std;

class main{
    public:
    virtual void signup()=0;
    virtual void login()=0;

    void calling(){
        cout<<"we are getting calling......"<<endl;
    }

};

class sub: public main
{
    public:
     void signup(){
        cout<<"your are signup...."<<endl;
     }
     void login(){
        cout<<"your are login...."<<endl;
    }

};


int main()
{

    sub obj;

    obj.signup();
    obj.calling();
    obj.login();

    return 0;

}
