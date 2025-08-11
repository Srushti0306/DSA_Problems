#include <iostream>
using namespace std;

// int gcd(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//         {
//             a = a % b;
//         }
//         else
//         {
//             b = b % a;
//         }
//     }

//     if (a == 0)
//         return b;
//     return a;
// }

int gcdRecursive(int a, int b)
{ // we assume a as greatest
    if (b == 0)
        return a;

    return gcdRecursive(b, a % b);
}

int lcm(int a, int b)
{
    int g = gcdRecursive(a, b);
    return (a * b) / g;
}

int main()
{
    cout << lcm(20, 28);

    return 0;
}