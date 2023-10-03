#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;
    Person(int a, string n){
        age=a;
        name=n;
        cout<<"Parameterized constructor is called"<<endl;
    }
    Person(const Person& other){
        name=other.name;
        age=other.age;
        cout<<"Copy constructer is called "<<endl
    }
}
int main() {

    return 0;
}