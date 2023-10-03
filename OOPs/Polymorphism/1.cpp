//function overloading

// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// int add(int a,int b,int c){
//     return a+b+c;
// }
// float add(float a,float b){
//     return a+b;
// }

// int main() {
//     cout<<add(3.7f,4.6f);

//     return 0;
// }

//function overriding
#include<iostream>
using namespace std;
class Base{
    public:
   virtual void  display(){
        cout<<"This is Base class"<<endl;

    }
};
class Derived:public Base{
    public:
    void display() {
        cout<<"This is derived class";
    }

};
int main() {
    Base* baseptr;
    Base b;
    Derived d;
    baseptr=&b;
    baseptr->display();
    baseptr=&d;

    baseptr->display();
    
    

    return 0;
}