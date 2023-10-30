//      1
//     21
//    321
//   4321
//  54321
// 654321


#include<iostream>
using namespace std;
void fun(int n){
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
    
        cout<<endl;
    }
}
int main() {
    int n=6;
    fun(n);

    return 0;
}