#include<iostream>

using namespace std;

class food{

    public:
    void gujrati(){
        cout<<"choose a gujrati food like a thepda and chatni..."<<endl;
    }

};

class panjabi: public food{
    public:
      void gujrati(){
        cout<<"choose a panjabi food like a lassi and paratha ..."<<endl;

        food::gujrati();
    }
};


int main(){


    panjabi p1;

    p1.gujrati();

    return 0;
}