
//friend fumction

#include<iostream>
using namespace std;
class Myclass{
    private:
    int age=23;
    public:
    friend void ShowAge(const Myclass& m);

};
void ShowAge(const Myclass& m) {
    cout<<"Age is:"<<m.age;

}
int main() {
    Myclass m;
    ShowAge(m);

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