// * * * * 
// * * * * 
// * * * * 
// * * * *

#include<iostream>
using namespace std;

int main() {
    int rows,columns;
    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of Columns:";
    cin>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}