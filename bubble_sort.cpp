// swap the adj elements and put the greater to the last of array

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    bubbleSort(arr,n);
    printArr(arr,n);
}