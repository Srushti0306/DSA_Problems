#include <iostream>
using namespace std;

int sumR(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumR(n - 1);
}

int main()
{
    int n = 2;
    int cnt = sumR(n);
    cout<<cnt;
    return 0;
}