#include<iostream>

using namespace std;

class node
{
        public:
        int data;
        node *next;
};


int main()
{

    node *obj = new node();
    node *obj2= new node();
    node *obj3= new node();

    obj->data=20;
    obj->next=NULL;

    obj2->data=50;
    obj2->next=NULL;
    obj->next=obj2;


    obj3->data=80;
    obj3->next=NULL;
    obj2->next=obj3;


    cout<<"data is a->"<<obj->data<<"    "<<"adress is a -> "<<obj->next<<endl;
    cout<<"data is a->"<<obj2->data<<"    "<<"adress is a -> "<<obj2->next<<endl;
     cout<<"data is a->"<<obj3->data<<"    "<<"adress is a -> "<<obj3->next<<endl;

    return 0;
}