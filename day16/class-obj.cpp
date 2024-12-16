#include<iostream>
#include<string>
using namespace std;


class Grocery{

    private:
    char item[100];
    int price;
    char cat[100];
    float rate;

    public:
    
    void setData(char item[],int price,char cat[],float rate) {
        strcpy(this->item,item);
        this->price=price;
        strcpy(this->cat,cat);
        this->rate=rate;
    }

    void getData(){
        cout<<"item: "<<item<<"price: "<<price<<"cat: "<<cat<<"rate: "<<rate<<endl;
    }

    Grocery *setpointer()
    {
        return this;

    }

};

int main(){

     Grocery item1,item2;

     Grocery *item3;

     item1.setData("chips",25,"snacks",3.4);
     item2.setData("soda",30,"boost",4.2);

     item3=item1.setpointer();

     item1.getData();
     item2.getData();
     item3->getData();


    return 0;
}
