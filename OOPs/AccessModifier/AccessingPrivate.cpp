#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    void setdetails(string n,int a){
        name=n;
        age=a;
    }
    void displaydetails(){
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;

    }
};
int main() {
Person p;
p.setdetails("utpal",23);
p.displaydetails();

    return 0;
}