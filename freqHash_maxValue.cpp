#include<iostream>
#include <unordered_map>
using namespace std;

int maxFreq(int arr[],int n){
    int maxfreq=0;
    int max_value=0;

    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        int max_value= ++m[arr[i]];
        if(max_value>=maxfreq){
            maxfreq=max_value;
        }
    }
    return maxfreq;
}

int main(){
    int arr[] = {10, 5, 3, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);  
    int a=maxFreq(arr, n);
    cout<<"The max value is: "<<a<<endl;
    return 0;
}