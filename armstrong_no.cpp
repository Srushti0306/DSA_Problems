#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int a)
{
    int n=a;
    int cnt = (int)(log10(n) + 1);
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += (int)(pow(last_digit, cnt) + 0.5); 
        n = n / 10; //--> remove last digit
    }

    return sum==a;
}

int main()
{
    int n = 153;
    if(isArmstrong(n)){
        cout<<"Is armstrong";
    }else{
        cout<<"not armstrong";
    }

    return 0;
}