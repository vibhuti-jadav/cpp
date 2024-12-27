#include<iostream>
using namespace std;

template <typename T>

class collection
{
    private:

    int size;
    T *arr;


        public:
        void createArray(int size){
                this->size=size;
                arr=new T[this->size];


                if(arr !=NULL){
                    cout<<"array is created successfully....!"<<endl;
                }
                else{
                    cout<<"array is craeated failed...!"<<endl;
                }
        }

        void setArray(int index,T element){
            if(index>=0 && index<this->size){
                arr[index]=element;
            }
            else{
                cout<<"error: index is out of array size....";
            }
        }

        void getArr(){

            for(int i=0;i<this->size;i++){
                cout<<arr[i]<<endl;
            }
        }

};

int main(){


collection<int> obj;

obj.createArray(5);

obj.setArray(2,5);
obj.setArray(3,10);

obj.getArr();


    return 0;
}