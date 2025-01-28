#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl; 
}

int binary_search(int arr[], int low,int high,int target)
{
    // if(low > high)
    // {
    //     return -1;
    // }

    // int mid = (low+high)/2;

    // if(arr[mid] == target)
    // {
    //     return mid;
    // }
    // else if(arr[mid] > target)
    // {
    //    return binary_search(arr, low, mid, target);
    // }
    // else{
    //    return binary_search(arr, mid+1, high, target);
    // }

    // return -1;


    while(low < high)
    {
            int mid=(low+high)/2;
            if(arr[mid]== target){
                return mid;
            }
            else if(arr[mid]>target){
                    high=mid;
            }
            else
            {
                low=mid+1;
            }
            
    }
    return -1;
    
}


int main(){

        int arr[5]={5, 10, 20, 30, 40};
        int n=5;
        int t;
        cout<<"target: ";
        cin>>t;

         print_arr(arr, n);

         int l_index= binary_search(arr,0, n ,t);

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