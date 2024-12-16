#include<iostream>

using namespace std;

    class Grocery{

        private:
        int no;
        char name[100];
        char add[100];
        int num;

        public:

        void setData(int i){
            cout<<"item["<<i<<"].no:";
            cin>>this->no;
            cout<<"item["<<i<<"].name:";
            cin>>this->name;
            cout<<"item["<<i<<"].add:";
            cin>>this->add;
            cout<<"item["<<i<<"].num:";
            cin>>this->num;
        }

        void getData(){
            cout<<"no: "<<no<<"name: "<<name<<"add: "<<add<<"num: "<<num<<endl;
        }
    };

int main(){

    int size;
    cout<<"size: ";
    cin>>size;

    Grocery item[size];
    for(int i=0;i<size;i++){
        item[i].setData(i);
    }

    for(int i=0;i<size;i++){
        item[i].getData();
    }


    return 0;
}