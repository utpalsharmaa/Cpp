#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"constructer is called for "<<name<<endl;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"age "<<age<<endl;

    }
};
int main() {
    Person p("Utpal",23);
    p.display();

    return 0;
}