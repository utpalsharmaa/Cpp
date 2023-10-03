#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

}
int main() {
   
    int arr[]={13,46,21,2,16,3};
    int n=sizeof(arr)/4;
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}