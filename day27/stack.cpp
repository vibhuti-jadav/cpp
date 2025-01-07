#include<iostream>

using namespace std;

class stack
{
        private:
        int capacity;
        int *arr;
        int size;
        int top;

        public:
        stack(int cap){
            this->capacity=capacity;

            arr=new int[capacity];
            
            size = 0;
            top = -1;
            
        }
          ~stack(){
            delete []arr;
        }


        void push(int ele){
              if(this->top < this->capacity){
                this->top++;
                this->arr[this->top]=ele;
                size++;
              }
              else{
                cout<<"this stack is a overflow....!"<<endl;
              }
        }

        void pop(){
            if(this->top == -1){
                cout<<"stack is underflow...."<<endl;
            }
            this->top--;
            size--;

        }

        void peek(){
            if(this->top == -1){
                cout<<"this is a underflow.....!"<<endl;
            }
            cout<<this->arr[this->top]<<endl;
        }

    void isempty(){
        if(this->top == -1){
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl; 
        
        }
    }
      

      void isfull(){
        if(this->top == this->capacity-1){
            cout<<"stack is full.....!"<<endl;
        }
        else{
            cout<<"stack is not full....!"<<endl;
        }
      }

      void issize(){
            if(this->top == -1){
            cout<<"stack  is underflow....! "<<endl;
        }
        else
        {
            cout<<"Size is a "<< size <<endl; 
        
        }  
      }

      void view(){
        if(this->top == -1){
            cout<<"stack is underflow..."<<endl; 
        }
        else{
            for(int i=this->top;i>=0;i--){
                cout<<this->arr[i]<<endl;
            }
        }
      }
};


int main(){

    int capacity;

    cout<<"enter capacity:-";
    cin>>capacity;


    stack Stack(capacity);


     int choice, ele, pos;

do{
    cout << " press 1 for push" << endl;
    cout << " press 2 for pop" << endl;
    cout << " press 3 for peek" << endl;
    cout << " press 4 for is empty" << endl;
    cout << " press 5 for is full" << endl;
    cout << " press 6 for size" << endl;
    cout << " press 7 for view" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout<<"element:-";
        cin>>ele;

        Stack.push(ele);

        break;
    
    case 2:
        Stack.pop();
        break;
    
    case 3:

    Stack.peek();
        break;


    case 4:
    Stack.isempty();
        break;
                                                                                  

    case 5:
    Stack.isfull();
        break;

    case 6:
    Stack.issize();
        break;

    case 7:
    Stack.view();
        break;





    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);
  


    return 0;
}