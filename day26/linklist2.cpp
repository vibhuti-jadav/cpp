#include<iostream>

using namespace std;

class Node
{

    public:
    int data;
    Node *next;

};

int main()
{
    Node *HEAD, *currect;

        HEAD= new Node();
        HEAD->data=10;
        HEAD->next=NULL;

    Node *ptr=HEAD;

        currect= new Node();
        currect->data=20;
        currect->next=NULL;
        HEAD->next=currect;

        currect= new Node();
        currect->data=30;
        currect->next=NULL;
        HEAD->next->next=currect;

        currect= new Node();
        currect->data=40;
        currect->next=NULL;
        HEAD->next->next->next=currect;


     //  cout<<"data is a->"<<HEAD->data<<"    "<<"adress is a -> "<<HEAD->next<<endl;
     //  cout<<"data is a->"<<HEAD->next->data<<"    "<<"adress is a -> "<<HEAD->next<<endl;
     //  cout<<"data is a->"<<HEAD->next->next->data<<"    "<<"adress is a -> "<<HEAD->next->next<<endl;
     //  cout<<"data is a->"<<HEAD->next->next->next->data<<"    "<<"adress is a -> "<<HEAD->next->next->next<<endl;

        while(ptr !=NULL)
        {
            cout<<"data is a:"<<" " <<ptr->data<<"    "<<"address is a:"<<" "<<ptr<<endl;
            ptr=ptr->next;
        }

    return 0;
}