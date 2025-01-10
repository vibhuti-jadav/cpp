#include<iostream>

using namespace std;

class queue
{
        private:
    
        int cap;
        int *arr;
        int size;
        int front;
        int rear;

        public:
        queue(int cap){
            this->cap=cap;
            arr=new int[cap];
            size=0;
            front=-1;
            rear=-1;
        }

        ~queue(){
            delete []arr;
        }

        void enqueue(int ele)
        {
            if(this->front == -1 && this->rear == -1){
                this->front=0;
                this->rear=0;
                this->size=0;
                this->arr[this->rear]=ele;
                size++;
            }
            else if(size == this->cap){
                cout<<"queue is a overflow.."<<endl;
            }
            else{

                this->rear++;
                this->arr[this->rear]=ele;
                size++;
            }
           
        }

        void dequeue(){
            if(this->front == -1 && this->rear == -1)
            {
                  cout<<"queue is empty....!";
            }
            else if(size == this->cap){
                    this->front= -1;
                   this->rear= -1;
                   size--; 
            }
            else{
                front++;
                 this->arr[this->front];
                 size--;
            }
        }

        void Front(){
             if(this->front == -1 && this->rear == -1)
            {
                  cout<<"queue is empty....!"<<endl;
            }
           
                cout<<this->arr[this->front]<<endl;
        }

  
    void Rear(){
           if(this->front == -1 && this->rear == -1)
            {
                  cout<<"queue is empty....!"<<endl;
            }
           
                cout<<this->arr[this->rear]<<endl;
    }

    void isempty(){

         if(this->front == -1 && this->rear == -1)
            {
                  cout<<"queue is empty....!"<<endl;
            }
            else{
                cout<<"queue is not empty.....";
            }
    }
    void isfull(){
        if(size == this->cap){
            cout<<"queue is a full.."<<endl;

        }       
        else{
            cout<<"queue is empty...."<<endl;
        }
    }

    void isSize(){
            if(this->front == -1 && this->rear == -1){
                 cout<<"stack  is underflow....! "<<endl;
            }
            else{
                    cout<<"Size is a "<< size <<endl; 
            }
    }

      void display()
    {
        for(int i=this->front;i<=this->rear;i++)
        {
            cout<< this->arr[i]<<" ";
        }
        cout<<endl;

    }



};



int main()
{

    int cap;
    cout<<"capacity:-";
    cin>>cap;


    queue queue(cap);

    int choice,ele,pos;

    do{
        cout<<"press 1 for enqueue"<<endl;
        cout<<"press 2 for dequeue"<<endl;
        cout<<"press 3 for front"<<endl;
        cout<<"press 4 for rear"<<endl;
        cout<<"press 5 for is empty"<<endl;
        cout<<"press 6 for is full"<<endl;
        cout<<"press 7 for is size"<<endl;
        cout<<"press 8 for is display"<<endl;
        cout<<"press 0 for exit.."<<endl;

        cout<<"choice:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"element:";
            cin>>ele;

            queue.enqueue(ele);
            break;

            case 2:
              queue.dequeue();
            break;

            case 3:
              queue.Front();
            break;

            case 4:
             queue.Rear();
            break;

            case 5:
            queue.isempty();
            break;

            case 6:
                queue.isfull();
            break;

            case 7:
            queue.isSize();
            break;

            case 8:
                queue.display();
            break;

             default:
               cout << "enter valid choice " << endl;
             break;

        }



    }while(choice != 0);


    return 0;
}

