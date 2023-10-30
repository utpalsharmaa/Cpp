//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
//  ********* 
//   *******  
//    *****   
//     ***    
//      * 
#include<iostream>
using namespace std;
void correctP(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<=rows-i-1;j++){
            cout<<" ";
        }
         for(int j=0;j<2*i+1;j++){
            cout<<"*";   
        }
         for(int j=0;j<=rows-i-1;j++){
            cout<<" "; 
        }
         cout<<endl;
    }
}
void InvertedP(int rows){
      for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
         for(int j=0;j<2*rows-i-(i+1);j++){
            cout<<"*";   
        }
         for(int j=0;j<=i;j++){
            cout<<" "; 
        }
         cout<<endl;
    }
}
int main() {
    int rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    correctP(rows);
    InvertedP(rows);
}
