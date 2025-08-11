#include<iostream>
using namespace std;

int main(){

    int n=5;
    int arr[5]={1,2,3,4,5};
    int max_sum=INT_MIN;

    for(int start=0;start<n;start++){
        int curr_sum=0;
        for(int end=start;end<n;end++){
            curr_sum+=arr[end];
            max_sum=max(curr_sum,max_sum);
        }
    }
    cout<<max_sum;
    return 0;
}