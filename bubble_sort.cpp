#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){ //outer iteraions 
        bool isSwap=false;  //little optimization
        for(int j=0;j<n-i-1;j++){ //inner iterations  5-0-1=4 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }

        }
        if(!isSwap){
            return;
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