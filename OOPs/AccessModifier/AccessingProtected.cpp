#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void displaydetails(){
        cout<<name<<" "<<age<<endl;
    }
};
class derivedPerson: public Person{
    public:
    void setDetails(string n,int a){
        name=n;
        age=a;
    }

};
int main() {
    derivedPerson dp;
    dp.setDetails("Utpal",23);
    dp.displaydetails();
    return 0;
}