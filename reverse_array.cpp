#include<iostream>
using namespace std;

void reverse_array(int arr[], int sz){
    int start=0, end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={20,5,7,64,99};
    int size=5;
    reverse_array(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}