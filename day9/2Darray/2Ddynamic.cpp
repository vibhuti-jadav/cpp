#include<iostream>

using namespace std;

int main(){

   int r,c;
   cout<<"enter row:";
   cin>>r;
   cout<<"enter colum:";
   cin>>c;

   int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"array["<<i<<"]["<<j<<"]:";
        cin>>arr[i][j];
    }
   }
   cout<<endl;


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}