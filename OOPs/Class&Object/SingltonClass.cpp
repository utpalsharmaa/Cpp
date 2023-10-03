// singlton class

#include<iostream>
using namespace std;

class Singleton{
    private:
    Singleton(){}
    public:
    static Singleton getS(){
        static Singleton S;
        return S;
    }
    void display(){
        cout<<"this is singlton class"<<endl;
    }
};
int main() {
    Singleton s=Singleton::getS();
    s.display();

    return 0;
}