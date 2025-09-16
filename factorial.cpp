#include<iostream>
using namespace std;

int fact(int n){

    //base case
    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n=2;
    int cnt=fact(n);
    cout<<"fact of "<<n<<" is "<<cnt;
    return 0;
}