#include <iostream>
#include "Store.h"

using namespace std;

Store::Store(){

}
void Store::setEmployer(){
    cin>>Employer;
}
string Store::getEmployer(){
    return Employer;
}
void Store::start(){
    cout << "What's your name:" << endl;
    setEmployer();
    int op=0;
    cout << "\n Welcome, "+getEmployer()+"!"<<endl;
    cout << "\n Store Yahoo!\n"<< endl;
    do{

        cout << "\n Option's Main"<< endl;
        cout <<"\n 1)Option's Store"<< endl;
        cout <<" 2)Option's Store"<< endl;
        cout <<" 3)Option's Store"<< endl;
        cout <<" 4)Option's Store"<< endl;
        cout <<" 5)Option's Store"<< endl;
        cout <<" 6)Option's Store"<< endl;
        cout <<" 7)Option's Store"<< endl;
        cout <<" 8)Option's Store\n";
        cout <<"\n 0)Finish Program\n "<< endl;
        cin>>op;
        option(op);
    }while(op!=0);
}
int Store::sum(int x,int y){
    return x+y;
}
int Store::reduce(int x,int y){
    return x-y;
}
int Store::multiplicate(int x,int y){
    return x*y;
}
int Store::divide(int x,int y){
    if(y==0){
        do{
            cout<<"Invalid input"<<endl;
            cin>>y;
        }while(y==0);
        return x/y;
    }else{
        return x/y;
    }
}
void Store::option(int x){
    int y;
    int z;
    switch(x){
        case 1:
            cout<<"Please insert a value to X"<<endl;
            cin>>y;
            cout<<"Now insert a value to Y"<<endl;
            cin>>z;
            cout<<sum(y,z)<<endl;
            break;
        case 2:
            cout<<"Please insert a value to X"<<endl;
            cin>>y;
            cout<<"Now insert a value to Y"<<endl;
            cin>>z;
            cout<<reduce(y,z)<<endl;
            break;
        case 3:
            cout<<"Please insert a value to X"<<endl;
            cin>>y;
            cout<<"Now insert a value to Y"<<endl;
            cin>>z;
            cout<<multiplicate(y,z)<<endl;
            break;
        case 4:
            cout<<"Please insert a value to X"<<endl;
            cin>>y;
            cout<<"Now insert a value to Y"<<endl;
            cin>>z;
            cout<<divide(y,z)<<endl;
            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;

        default:
            if(x==0){
                cout<<"Thank you so much!!"<<endl;
            }else{
                cout<<"Invalid option, let's try again?"<<endl;
            }
    }

}









