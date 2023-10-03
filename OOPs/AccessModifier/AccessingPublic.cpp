#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void displaydetails(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
int main(){
    Person p;
    p.name="utpal";
    p.age=15;
    p.displaydetails();

}