#include<iostream>

using namespace std;

class school{

    public:
    //  
    //   
    char name[50]="techaer1";
    char work[50]="principle work";
   
};
class teacher:public school{
    public:
    void teach(){
        cout<<"the all teacher are a greduate in science  "<<this->name<<endl;
       
    }
};

class principle:public school
{
    public:
    void head(){
       cout<<"the principle as a to many responciblty  "<<this->work<<endl;
    }
};


int main(){

    teacher t1;
    principle p1;

    t1.teach();
    p1.head();

    return 0;
}