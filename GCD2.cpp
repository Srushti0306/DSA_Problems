//optimized code  -->  Euclidean Algo

#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }

    }
    if(a==0){
        return b;
    }
    return a;
}

int main(){
    int n1 = 20, n2 = 15;
    int gcd = GCD(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}