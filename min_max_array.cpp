#include <iostream>

using namespace std;

int main(){
    int nums[]={15,8,7,55,-2};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int size=5;
    //smallest
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }

    //largest
    for(int i=0;i<size;i++){   //nums.size is used in vectors and not arrays
        if(nums[i]>largest){
            largest=nums[i];
        }
    }

    cout<<"The largest no is: "<<largest;
    cout<<"\nThe smallest no is: "<<smallest;
    
}