#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;

        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;

    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;

    }
    int k=0;
    for(int i=low;i<=high;i++){
        arr[i]=temp[k];
        k++;

    }
}
void mergesort(int arr[],int low ,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr, low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    int arr[]={3,1,2,4,1,5,2,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}