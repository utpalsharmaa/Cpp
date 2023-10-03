#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(){
        name="Utpal";
        age=23;
        cout<<"constructer is called for "<<name<<endl;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"age "<<age<<endl;

    }
};
int main() {
    Person p;
    p.display();

    return 0;
}