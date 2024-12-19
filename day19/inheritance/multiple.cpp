#include<iostream>

using namespace std;


class shop1{
       public:
       char name1[50]="jweleery";
};
class shop2{
    public:
    char name2[50]="clothes";
};

class shopping: public shop1,public shop2
{
    public:
    void allname(){
        cout<<"the shop1 is"<<" "<<this->name1 <<endl <<"the shop2 is"<<" "<<this->name2<<endl;
    }
};

int main(){
 
 shopping s1;

    s1.allname();



    return 0;
}