#include<iostream>
#include<string.h>

using namespace std;

int memo(int n){
    if(n>=5){
        return 0;
     }
     
     cout<<n<<endl;
     return memo(n+1);
}

int main(){

    memo(1);

    return 0;
}
