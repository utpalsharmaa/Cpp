// E
// ED
// EDC
// EDCB
// EDCBA
#include<iostream>
using namespace std;
void fun(int n){
    for(int i=0;i<n;i++){
        char ch='E';
        for(int j=0;j<=i;j++){
            cout<<ch--;
        }
        cout<<endl;
    }
}
int main() {
    int n=5;
    fun(n);

    return 0;
}