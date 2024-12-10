#include<iostream>
#include<string.h>

using namespace std;

class Bike
{

    public:
    char name[100];
    int price;
    char color[100];
    int model;

};

int main(){

     int size;

     cout<<"no of bike:";
     cin>>size;

     Bike b1[size];

    for(int i=0;i<size; i++){
        b1[i].name;
        b1[i].price;
        b1[i].color;
        b1[i].model;

        cout<<"Bike["<< i <<"]name: ";
        cin>>b1[i].name;
         cout<<"Bike["<< i <<"]price: ";
        cin>>b1[i].price;
         cout<<"Bike["<< i <<"]color: ";
        cin>>b1[i].color;
         cout<<"Bike["<< i <<"]model: ";
        cin>>b1[i].model;
        cout<<endl;
    }

cout<<endl;

cout<<" name "<<" "<<" price "<<" "<<" color "<<" "<<" model "<<endl<<endl;
cout<<"---------------------------------------------------------"<<endl;


for(int i=0;i<size;i++){
    cout<<"  "<<b1[i].name<<"  ";
    cout<<"  "<<b1[i].price<<"  ";
    cout<<"  "<<b1[i].color<<"  ";
    cout<<"  "<<b1[i].model<<"   "<<endl;
}





    return 0;
}