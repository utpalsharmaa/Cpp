#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
       int  mid=(low+high)/2;
       if(arr[mid]==target){
        return mid;

       } 
       else if(target>arr[mid]){
        low= mid+1;

       }
       else{
        high=mid-1;
       }

    }
    return -1;
}
int main() {
    int arr[] = {1 ,2 ,3 ,4 ,5, 6 ,7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target=2;
    cout<<BinarySearch(arr,n,target);

    return 0;
}