
// Single Inheritance

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void diaplayParent(){
//         cout<<"Parent is called"<<endl;
//     }

// };
// class Child:public Parent{
//     public:
//     void displayChild(){
//         cout<<"Child is called"<<endl;

//     }
// };
// int main() {
//     Child c;
//     c.displayChild();
//     c.diaplayParent();

//     return 0;
// }



// Multiple Inheritace

// #include<iostream>
// using namespace std;
// class grandParent{
//     public:
//     void displaygrandParent(){
//         cout<<"grand parent is called"<<endl;

//     }
// };
// class Parent{
//     public:
//     void displayParent(){
//         cout<<"Parent is called"<<endl;
//     }
// };
// class child:public Parent,public grandParent{
//     public:
//     void displaychild(){
//         cout<<"child is called"<<endl;
//     }
// };
// int main() {
//     child c;
//     c.displaychild();
//     c.displaygrandParent();
//     c.displayParent();

//     return 0;
// }



// MultiLevel Inheritance

// #include<iostream>
// using namespace std;
// class grandparent{
//     public:
//     void displayGrandParent(){
//         cout<<"Grand parent is called "<<endl;

//     }

// };
// class Parent:public grandparent{
//     public:
//     void displayParent(){
//         cout<<"Parent is called "<<endl;   
//     }
// };
// class child:public Parent{
//     public:
//     void displayChild(){
//         cout<<"Child is called "<<endl;

//     }

// };
// int main() {
//     child c;
//     c.displayChild();
//     c.displayGrandParent();
//     c.displayParent();
//     return 0;
// }



// Hiarcharchi Inheritance

// #include<iostream>
// using namespace std;

// class grandParent{
//     public:
//     void displayGrandParent(){
//         cout<<"GrandParent is called ";
//     }
// };
// class parent:public grandParent{
//     public:
//     void displayParent(){
//         cout<<"Parent is called"<<endl;
//     }
// };
// class child:public grandParent{
//     public:
//     void displaychild(){
//         cout<<"child is called"<<endl;
//     }

// };
// int main() {
//     parent p;
//     p.displayGrandParent();
//     p.displayParent();

//     child c;
//     c.displayGrandParent();
//     c.displaychild();

//     return 0;
// }




// Hybrid Inheritance


// #include<iostream>
// using namespace std;
// class grandparent{
//     public:
//     void displayGrandParent(){
//         cout<<"Grand parent is called "<<endl;

//     }

// };
// class Parent:virtual public grandparent{
//     public:
//     void displayParent(){
//         cout<<"Parent is called "<<endl;   
//     }
// };
// class child:public Parent{
//     public:
//     void displayChild(){
//         cout<<"Child is called "<<endl;

//     }

// };
// int main() {
//     child c;
//     c.displayChild();
//     c.displayGrandParent();
//     c.displayParent();
//     return 0;
// }
