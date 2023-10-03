// // dynamic memory allocation
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;
//     void displaydetails(){
//         cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
//     }

// };
// int main() {
//      // Create an object using dynamic memory allocation
//      Person* personPtr = new Person;
//     // Access and set attributes using arrow operator
//      personPtr->name="utpal";
//      personPtr->age=15;

//     // Call member function using arrow operator
//      personPtr->displaydetails();

//     // Deallocate the dynamically allocated object
//      delete personPtr;
//     return 0;
// }

#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void display(){
        cout<<name<<endl<<age<<endl;
    }
};
int main() {
    Person* personpte=new Person;
    personpte->name="utpal";
    personpte->age=23;
    personpte->display();
    delete personpte;
    return 0;
}