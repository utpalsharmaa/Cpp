//virtualfunction
#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"This is base class"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"This is derived class"<<endl;
    }
};
int main() {
    base* baseptr;

    base b;
    derived d;
    baseptr=&b;
    baseptr->display();
    baseptr=&d;
    baseptr->display();
    return 0;
}