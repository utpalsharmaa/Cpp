// E
// DE
// CDE
// BCDE
// ABCDE
#include<iostream>
using namespace std;
void fun(int n){
    char ch='E';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char c=ch+j;
            cout<<c;
        }
        ch--;
        cout<<endl;
    }
}
int main() {
    int n=5;
    fun(n);

    return 0;
}