#include<iostream>

using namespace std;

void odd(){
    for(int i=0;i<20;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

}
void even(){
    for(int i=0;i<20;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
}

int main(){

           cout<<"function to the first function"<<endl;


        cout<<"it is a odd number"<<endl;
           odd();
           cout<<"it is a even number"<<endl;
           even();

    return 0;
}