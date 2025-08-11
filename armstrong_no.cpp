#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int ans = n;
    int result = 0;
    while (n != 0)
    {
        int digit = n % 10;
        result += (digit * digit * digit);

        n = n / 10;
    }
    return result == ans;
}

int main()
{
    int n=153;
    if(isArmstrong(n)){
        cout<<"Is armstrong";
    }else{
        cout<<"not armstrong";
    }

    return 0;
}