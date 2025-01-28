#include<iostream>
using namespace std;

void print_arr(int arr[] , int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int linear_search(int arr[],int n,int t){
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }

    return -1;
}

int main(){

        int arr[5] = {5, 10, 55, 20, 7};
        int n = 5;
        int t;
        cout<<"target:";
        cin>>t;

        print_arr(arr, n);

        int l_index= linear_search(arr, n ,t);

        if(l_index == -1)
        {
            cout<<"element not found...!"<<endl;
        }
        else
        {
            cout<<"element found at:"<<l_index <<endl;
        }


    return 0;
}