//      1
//     12
//    123
//   1234
//  12345
// 123456
#include<iostream>
using namespace std;
void fun(int n){
    int s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<s++;
        }
        s=1;
        cout<<endl;
    }
}
int main() {
    int n=6;
    fun(n);

    return 0;
}