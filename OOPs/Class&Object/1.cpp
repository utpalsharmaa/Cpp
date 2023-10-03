// #include<iostream>
// using namespace std;
// class person{
//     public:
//     int age;
//     string name;
//     void display(string s,int a){
//         name=s;
//         age=a;
//         cout<<"Person name is:"<<name<<endl<<"Age is:"<<age<<endl;
//     }
// };
// int main() {
//     person p;;
//     p.display("utpal",23);
//     return 0;
// }
#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"person name:"<<name<<endl<<"person age is"<<age<<endl;
    }

};
int main() {
    person* personptr=new person;
    personptr->age=23;
    personptr->name="utpal";
    personptr->display();
    delete personptr;
    return 0;
}
