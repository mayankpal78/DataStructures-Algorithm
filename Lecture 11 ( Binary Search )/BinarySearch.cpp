#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int size , int key){
    int i = 0 ;
    
    while( i<=size){
        int mid = (i + size)/2 ;
        //If key found
        if(arr[mid] == key ){
            return mid;
           
        }
        //If key is greater than arr[mid]
        else if (key>arr[mid] ){
            i = mid+1;
            
        }
        // If key is less than arr[mid]
        else if(key<arr[mid] ){
            i = 0;
            size = mid-1;
        }
        
    }
     return -1;
    
    
}
int main(){
    int evenarray[5]={3,5,9,13,24};
    int key = 11;
    int result = BinarySearch(evenarray,5 , key);
    cout << result ;
}