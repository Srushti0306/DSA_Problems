#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool primeNo(int n)
{
    int count = 0;
    int sqrtN = sqrt(n);

    for (int i = 1; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            count += 1;
            if (i != n / i)
            {
                count += 1;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int n = 20;
    bool isPrime = primeNo(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}