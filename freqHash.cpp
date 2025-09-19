#include <iostream>
#include <unordered_map>
using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int, int> m;

    // added freq for each element
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    // print map
    for (auto x : m)
    {
        cout << x.first << " --> " << x.second<<endl;
    }
}

int main()
{
    int arr[] = {10, 5, 3, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(arr, n);
    return 0;
}