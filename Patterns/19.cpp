// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
#include<iostream>
using namespace std;
void fun(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char c=ch+j;
            cout<<c;
        }
        cout<<endl;
    }
}
int main() {
    int n=6;
    fun(n);

    return 0;
}