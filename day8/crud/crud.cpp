#include<iostream>

using namespace std;

int main(){

        int arr[5] ={1,2,3,4,5};

        cout<<endl;

        cout<<"press 1 for update"<<endl;
        cout<<"press 2 for delete"<<endl;
        cout<<"press 3 for display"<<endl;

        int choice;
        cout<<"choise";
        cin>>choice;

        switch(choice){
            case 1:
            int update_pos;
            int update_ele;

            cout<<"enter position";
            cin>>update_pos;
            cout<<"enter element";
            cin>>update_ele;
            arr[update_pos]=update_ele;
            cout<<endl;

            for(int i=0;i<5;i++){
                cout<<arr[i]<<endl;
            }
            cout<<endl;
            break;

             case 2:
             int del;
             cout<<"delete";
             cin>>del;

             for(int i=del;i<5;i++){
                arr[i]=arr[i+1];
             }
             cout<<endl;

             for(int i=0;i<5-1;i++){
                cout<<arr[i]<<" ";
             }
             cout<<endl;
            break;

             case 3:
            break;
        }


    return 0;
}