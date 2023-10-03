#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}

int main() {
   
    int arr[]={13,46,21,2,16,3};
    int n=sizeof(arr)/4;
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}