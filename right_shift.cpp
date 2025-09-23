#include <iostream>
#include <vector>
using namespace std;

void rightShift(vector<int> &arr, int k)
{
    int n = arr.size();
    int j = 0;
    while (j < k)
    {
        int last = arr[n - 1]; // store first element
        // shift left
        for (int i = n - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = last;
        j++;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rightShift(arr, 2);
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}


//optimized right shift
// class Solution {
// public:
//     void rotate(vector<int>& arr, int k) {
//         int n = arr.size();
//         if (n == 0)
//             return;
//         // remove unnessary ratoations
//         k = k % n;

//         // copy the k elements to the temp array
//         vector<int> temp;
//         for (int i = n - k; i < n; i++) {
//             temp.push_back(arr[i]);
//         }

//         // shift remaing to the right
//         for (int j = n - k - 1; j >= 0; --j) {
//             arr[j + k] = arr[j];
//         }

//         // copy the temp ele
//         for (int i = 0; i < k; ++i) {
//             arr[i] = temp[i];
//         }
//     }
// };