// E
// EF
// EFG
// EFGH
// EFGHI
#include<iostream>
using namespace std;
void fun(int n){
    for(int i=0;i<n;i++){
        char ch='E';
        for(int j=0;j<=i;j++){
            char c=ch+j;
            cout<<c;
        }
        cout<<endl;
    }
}
int main() {
    int n=5;
    fun(n);

    return 0;
}