#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    for(int i=1;i<=2*rows-1;i++){
        int stars=i;
        if(i>rows) stars=2*rows-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}