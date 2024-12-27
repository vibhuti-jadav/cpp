#include<iostream>
#include<vector>

using namespace std;

int main(){

    

vector <int>arr{2, 4, 6, 8, 5}; 

// cout << arr.size() << endl;



int choice;
cout<<"---------------------------------------------------------------"<<endl;

cout<<"this is a array element is a {2 , 4 , 6, 8, 5}"<<endl;

cout<<"---------------------------------------------------------------"<<endl;

do{

    cout<<"enter 1 a  size method using"<<endl;
    cout<<"enter 2 a  push method using"<<endl;
    cout<<"enter 3 a  pop  method using"<<endl;
    cout<<"enter 4 a  being  method using"<<endl;
    cout<<"enter 5 a at method using"<<endl;
    cout<<"enter 6 a empty method using"<<endl;

    cout<<endl;

    cout<<"choice:";
    cin>>choice;




    switch(choice)
    {
            case 1:

            cout << arr.size() << endl;
  
            break;

            case 2:

                  arr.push_back(19);
                 cout<<arr.size();
                 
                 cout<<endl;
            break;

            case 3:

            arr.pop_back();
            cout<<arr.size();
            cout<<endl;
            break;

            case 4:

               arr.insert(arr.begin()+1, 3);
                cout<<arr.size();
                cout<<endl;
            
            
            break;

             case 5:

                cout << arr.at(2) << endl;
                cout<<arr.size();
                cout<<endl;
            
            
            break;

                case 6:

                 cout << arr.empty() << endl;
            
            
                break;

        default:
                    cout<<"sorryy.. it is not in a option"<<endl;

        break;


   


    }


}while(choice!=0);


    return 0;
}