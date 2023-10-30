//     A    
//    ABC   
//   ABCDE  
//  ABCDEFG 
// ABCDEFGHI
#include<iostream>
using namespace std;
void fun(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        for(int j=0;j<2*i+1;j++){
            char c=ch+j;
            cout<<c;
            
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            
        }
        cout<<endl;
    }

}
int main() {
    int n=5;
    fun(n);

    return 0;
}