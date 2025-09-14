#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> divisor(int n)
{
    vector<int> arr;
    int sqrtN = sqrt(n);
    for (int i = 1; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);

            if(i!=n/i){
                arr.push_back(n/i);
            }
        }
    }
    return arr;
}

int main()
{
     int number = 12;
    vector<int> divisors = divisor(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}