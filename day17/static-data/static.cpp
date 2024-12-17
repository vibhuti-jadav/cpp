#include<iostream>
#include<string.h>
using namespace std;


class employee
{
    private:

    int no;
    char name[100];
    char feild[100];


public:
    void setData(int i){

      cout << "c["<<i<<"].no: ";
       cin >> this->no;
        cout << "c["<<i<<"].name: ";
        cin >> this->name;
     
        cout << "c["<<i<<"].feild: ";
        cin >> this->feild;
    }

    void getData(){
        
        cout << no << " " << name << " " << feild << endl;
    }


    employee *getaddress(){
        return this;
    }




};




int main(){



int size; 
cout << "size: ";
cin >> size;

employee c[size]; 

for(int i=0; i<size; i++){
    c[i].setData(i);
}

for(int i=0; i<size; i++){
    c[i].getData();
}
}
