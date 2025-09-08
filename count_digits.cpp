#include<iostream>
using namespace std;

void counting(int n){
    int count=0;
    while(n>0){
        count+=n%10;    //also int cnt = (int)(log10(n)+1);
        n=n/10;
    }
    cout<<count;
}

int main(){
    int n=12345;
    counting(n);
    return 0;
}