#include<iostream>
using namespace std;
class grandparent{
    public:
    void diaplaygrandparent(){
        cout<<"this is grandparent class"<<endl;
    }
};
class parent:public grandparent{
    public:
    void diaplayparent(){
        cout<<"this is parent class"<<endl;
    }

};
class child:public grandparent{
    public:
    void diaplaychild(){
        cout<<"this is child lass"<<endl;
    }

};
int main() {
    parent p;
    p.diaplaygrandparent();
    p.diaplayparent();

    child c;
    c.diaplaygrandparent();
    c.diaplaychild();


    return 0;
}