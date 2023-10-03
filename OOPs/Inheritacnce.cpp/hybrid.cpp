#include<iostream>
using namespace std;
class grandparent{
    public:
    void displaygrandparent(){
        cout<<"this is grandparent class"<<endl;
    }
};
class parent: virtual public grandparent{
    public:
    void displayparent(){
        cout<<"this is parent class"<<endl;
    }

};
class child:public parent{
    public:
    void displaychild(){
        cout<<"this is child class";
    }
};
int main() {
    child c;
    c.displaygrandparent();
    c.displayparent();
    c.displaychild();


    return 0;
}