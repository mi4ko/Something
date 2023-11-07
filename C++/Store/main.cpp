#include <iostream>

//A little project to remember C++ code

using namespace std;

class Store{
private:
    string Employer="";
public:
    string potato;
    Store(){


    }
    void setEmployer(){
        cin>>Employer;
    }
    string getEmployer(){
        return Employer;
    }
    void start(){
        cout << "What's your name:" << endl;
        setEmployer();
        int op=0;
        do{
            cout << "\n Welcome, "+getEmployer()+"!";
            cout << "\n Store Yahoo!\n"<< endl;
            cout << " Option's Main"<< endl;
            cout <<"\n 1)Option's Store"<< endl;
            cout <<" 2)Option's Store"<< endl;
            cout <<" 3)Option's Store"<< endl;
            cout <<" 4)Option's Store"<< endl;
            cout <<" 5)Option's Store"<< endl;
            cout <<" 6)Option's Store"<< endl;
            cout <<" 7)Option's Store"<< endl;
            cout <<" 8)Option's Store\n";
            cout <<"\n 0)Finish Program\n"<< endl;
            cin>>op;

        }while(op!=0);
    }


};
int main()
{
    Store market;
    market.start();
    return 0;
}
