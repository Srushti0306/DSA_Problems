#include <iostream>
#include <vector>
using namespace std;

void leftShift(vector<int> &arr, int k)
{
    int n = arr.size();
    int j=0;
    while (j < k)
    {
        int first = arr[0]; // store first element
        // shift left
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = first;
        j++;
    }
   
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    leftShift(arr,2);
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}