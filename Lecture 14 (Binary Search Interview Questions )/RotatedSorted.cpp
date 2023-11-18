#include<iostream>
using namespace std;
int rotatedsorted(int arr[] , int size , int k){
    int i = 0;
    int ans = 0;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid]==k){
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            i = mid ;
        }
        else if (arr[mid]<arr[mid+1]){
            size = mid-1;
        }

    }
    return ans;
}
int main(){
    int arr[5]={12,15,18,2,4};
    int result = rotatedsorted(arr,5,2);
    cout << result ;
}