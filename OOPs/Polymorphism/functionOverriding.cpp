#include<iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "This is Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "This is Derived class" << endl;  
    }
};

int main() {
    Base* basePtr;
    Base b;
    Derived d;

    basePtr = &b;
    basePtr->display();  // Output: "This is Base class"

    basePtr = &d;
    basePtr->display();  // Output: "This is Derived class"

    return 0;
}
// #include<iostream>
// using namespace std;
// class Base{
//     public:
//      void display(){
//         cout<<"This is Base class"<<endl;
//     }

// };
// class Deriverd:public Base{
//     public:
//       void display() {
//         cout<<"This is Derived  class";
//     }

// };
// int main() {
//     Base* basePtr;
//     Base b;
//     Deriverd d;

//     basePtr=&b;
//     basePtr->display();

//     basePtr=&d;
//     basePtr->display();
//     return 0;
// }