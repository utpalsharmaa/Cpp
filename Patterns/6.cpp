// 1 2 3 4 5 
// 6 7 8 9 
// 10 11 12 
// 13 14 
// 15
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
        for(int j=0;j<columns;j++){
            cout<<n++<<" ";
        }
        columns--;
        cout<<endl;
    }
    return 0;
}