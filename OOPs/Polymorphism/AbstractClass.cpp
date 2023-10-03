// Abstract classes contain one or more pure virtual functions. 
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display()=0;
};
class derived:public Base{
    public:
    void display(){
        cout<<"This is derived class."<<endl;

    }
};
int main() {
    Base* baseptr;
    //we canonot create object of an abstract class
    derived d;
    baseptr=&d;
    baseptr->display();

    return 0;
}



