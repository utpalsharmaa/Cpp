// A B C D E F 
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
#include<iostream>
using namespace std;
void fun(int n){
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++){
            char c=ch+j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n=6;
    fun(n);

    return 0;
}