// ****************
// *******  *******
// ******    ******
// *****      *****
// ****        ****
// ***          ***
// **            **
// *              *
// *              *
// **            **
// ***          ***
// ****        ****
// *****      *****
// ******    ******
// *******  *******
// ****************

#include<iostream>
#include<math.h>
using namespace std;
void fun(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
         for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";
        }
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main() {
  int n=8;
  fun(n);
    return 0;
}