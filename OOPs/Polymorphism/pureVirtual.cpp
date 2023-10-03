#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display()=0;
};
class derived:public Base{
    public:
    void display() override{
        cout<<"This is derived class";
    }
};
int main() {
    Base* baseptr;
    derived d;
    baseptr=&d;
    baseptr->display();


    return 0;
}