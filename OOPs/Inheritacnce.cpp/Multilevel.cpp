#include<iostream>
using namespace std;
class gradparent{
    public:
    void displaygrandparent(){
        cout<<"grandparent class is called"<<endl;
    }
};
class parent:public gradparent{
    public:
    void displayparent(){
        cout<<"parent class is called"<<endl;
    }
};
class child:public parent{
    public:
    void displaychild(){
      
        cout<<"child  class is called"<<endl;
    }
};
int main() {
    child c;
    c.displaygrandparent();
    c.displayparent();
    c.displaychild();

    return 0;
}