#include<iostream>

using namespace std;

class collage
{
      public:
      void student(){
        cout<<"this is a science student"<<endl;
    }
      void student(int a){
        cout<<"this is a commerce student"<<endl;
    }
      void student(int a,int b){
        cout<<"this is a arts student"<<endl;
    }
};

int main(){

    collage s1;

    s1.student();
    s1.student(10);
    s1.student(10,20);



    return 0;
}