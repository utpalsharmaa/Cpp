#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void displaydetails(string n,int a){
        name = n;
        age = a;
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
    }
};
int main() {
    Person p;
    p.displaydetails("utpal",15);
    return 0;
}