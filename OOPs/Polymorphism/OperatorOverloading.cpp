// operatoroverloading

#include<iostream>
using namespace std;
class Sample{
    int x;
    public:
    Sample(int x) : x(x){}
    void operator++(){
        x++;
    }
    void display(){
        cout<<"value of X:"<<x<<endl;
    }

};
int main() {
    Sample s(10);
    ++s;
    s.display();
    return 0;
}

