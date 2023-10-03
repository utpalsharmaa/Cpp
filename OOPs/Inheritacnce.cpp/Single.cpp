#include<iostream>
using namespace std;
class Parent{
    int age;
    public:
    void displayAge(int a){
        age=a;
        cout<<"Parent age is:"<<age;
    }
};
class Child:public Parent{
    int a;

};
int main() {
    Child c;
    c.displayAge(23);



    return 0;
}


// #include<iostream>
// using namespace std;
// class Parent{
//     private:
//     int age;
//     public:
//     void setParent(int a){
//         age=a;
//     }
//     void displayParent(){
//         cout<<"Parent age is:"<<age;
//     }

// };
// class child: public Parent{
//     int Cage;
//     public:
//     void setChild(int a1){
//         Cage=a1;
//     }
//     void displayChild(){
//         cout<<"Child age is:"<<Cage<<endl;
//     }
// };
// int main() {
//     child c;
//     c.setParent(40);
//     c.setChild(18);
//     c.displayChild();
//     c.displayParent();

//     return 0;
// }












