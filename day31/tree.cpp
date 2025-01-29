#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

};

int main()
{

    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();


    n1->data =10;
    n1->left=n2;
    n1->right=n3;

    n2->data =20;
    n2->left=n1;
    n2->right=n4;


    cout<<n1->data <<" "<<n1->left << " "<< n1->right<<" "<<endl;
    cout<<n2->data <<" "<<n2->left << " "<< n2->right<<" "<<endl;

    return 0;
}
