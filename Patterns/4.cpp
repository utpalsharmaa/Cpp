// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include<iostream>
using namespace std;

int main() {
    int rows,columns;
    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of Columns:";
    cin>>columns;
    int n=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<n++<<" ";
        }
        n=1;
        cout<<endl;
    }

    return 0;
}