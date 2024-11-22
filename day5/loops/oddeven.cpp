#include<iostream>

using namespace std;

int main(){

        int start,end;

        cout<<"start";
        cin>>start;

        cout<<"end";
        cin>>end;

        for(int i=start;i<=end;i++){
            if(i%2==0){    //0,1
                cout<<i<<endl;
            }
        }

    return 0;
}