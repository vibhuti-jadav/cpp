#include<iostream>

using namespace std;

int main(){

    int a;
   

    cout<<"============Menu============" <<endl;

    cout<<"press one for pizza" <<endl;
    cout<<"press two for burgur" <<endl;
    cout<<"press three for sendwich" <<endl;
    cout<<"press four for pasta" <<endl;

     cin>>a;

    cout<<endl;

    switch(a){
        case 1:
        cout<<"******************** select your favourite pizza flavour ********************"<<endl;
                cout<<"press one margarita pizza" <<endl;
                cout<<"press two 7 chees  pizza" <<endl;
                cout<<"press three spicy pizza" <<endl;
                cout<<"press four chees brust pizza" <<endl;

                int b;
                cin>>b;

                cout<<endl;

                switch(b){
                    case 1:
                    cout<<"your margarita pizza is ready";
                    break;

                      case 2:
                    cout<<"your 7 chees pizza is ready";
                    break;

                      case 3:
                    cout<<"your spicy pizza is ready";
                    break;

                      case 4:
                    cout<<"your chees brust pizza is ready";
                    break;

                    default:
                    cout<<"nothing into menu";
                    break;

                }
        break;

         case 2:
        cout<<"******************** select your favourite burgur flavour ********************"<<endl;

                cout<<"press one aalu tikki burgur " <<endl;
                cout<<"press two chees burgur" <<endl;
                cout<<"press three panir burgur" <<endl;
                cout<<"press four shezvan burgur" <<endl;

                int c;
                cin>>c;

                cout<<endl;

                  switch(c){
                    case 1:
                    cout<<"your aalu tikki burgur is ready";
                    break;

                      case 2:
                    cout<<"your chees burgur is ready";
                    break;

                      case 3:
                    cout<<"your panir burgur is ready";
                    break;

                      case 4:
                    cout<<"your shezvan burgur is ready";
                    break;

                    default:
                    cout<<"nothing into menu";
                    break;

                }

        break;

         case 3:
        cout<<"******************** select your favourite sendwich flavour ********************"<<endl;

                cout<<"press one  chees loaded" <<endl;
                cout<<"press two veg.sandwich" <<endl;
                cout<<"press three mayonise sandwich" <<endl;
                cout<<"press four joungli sandwich" <<endl;

                int d;
                cin>>d;

                cout<<endl;

                  switch(d){
                    case 1:
                    cout<<"your chees loaded is ready";
                    break;

                      case 2:
                    cout<<"your veg.sandwich is ready";
                    break;

                      case 3:
                    cout<<"your mayonis sandwich is ready";
                    break;

                      case 4:
                    cout<<"your is joungli sandwich ready";
                    break;

                    default:
                    cout<<"nothing into menu";
                    break;

                }

        break;

         case 4:
        cout<<"******************** select your favourite pasta flavour ********************"<<endl;

               cout<<"press one  red souce pasta  " <<endl;
                cout<<"press two  white souce pasta   " <<endl;
                cout<<"press three  pink souce pasta" <<endl;
                cout<<"press four  chees pasta" <<endl;

                int e;
                cin>>e;

                cout<<endl;

                  switch(e){
                    case 1:
                    cout<<"your red souce pasta is ready";
                    break;

                      case 2:
                    cout<<"your white souce pasta is ready";
                    break;

                      case 3:
                    cout<<"your pink souce pasta is ready";
                    break;

                      case 4:
                    cout<<"your chees pasta is  ready";
                    break;

                    default:
                    cout<<"nothing into menu";
                    break;

                }


        break;

        default:
        cout<<"not in a menu";
        break;
    }

    return 0;
}

