//copy constructer
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"Parameterized constructor is called"<<endl;
    }
    Person(const Person& other){
        name=other.name;
        age=other.age;
        cout<<"Copy Constructor is called"<<endl;
    }
    void displaydetails(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age;

    }
};
int main() {
    Person p("Utpal",23);
    // p.displaydetails();
    Person copied=p;
    copied.displaydetails();

    return 0;
}