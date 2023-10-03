#include<iostream>
using namespace std;
class ParentA{
    public:
    void displayA(){
        cout<<"parent A is called"<<endl;

    }
};
class ParentB{
    public:
    void displayB(){
        cout<<"parent B is called "<<endl;

    }
};
class child:public ParentA,public ParentB{
    public:
    void displaychild(){
        cout<<"Child class is called"<<endl;
    }
};
int main() {
    child c;
    c.displayA();
    c.displayB();
    c.displaychild();
    return 0;
}