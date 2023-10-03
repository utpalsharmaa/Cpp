
// friend class

#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
   
    public:
    void displaydetails(string s,int a){
        name=s;
        age=a;
        cout<<"Person Name: "<<name<<endl<<"Age: "<<age<<endl;;
        
    }
     friend class friendclass;
};
class friendclass{
    public:
    void displaypersondetails(const person& p){
        cout<<p.name<<p.age;

    }
};
int main() {
    person p;
    p.displaydetails("utpal",23);
   
    friendclass f;
    f.displaypersondetails(p);
     return 0;
}
// #include<iostream>
// using namespace std;
// class Myclass{
//     private:
//     int age;
//     public:
//     void displayAge(int a){
//         age=a;
//         cout<<"My age is :"<<age<<endl;
//     }
//  friend class friendclass;
// };
// class friendclass{
//     public:
//     void friendAge(const Myclass& m){
//     cout<<"friend Age is:"<<m.age;

// }
// };
// int main() {
//     Myclass m;
//     m.displayAge(15);
    
//     friendclass f;
//     f.friendAge(m);

//     return 0;
// }