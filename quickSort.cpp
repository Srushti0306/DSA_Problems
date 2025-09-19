#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end)
{
    int idx=st-1;
    int pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    swap(arr[idx + 1], arr[end]);
    return idx + 1;
}

void quickSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int pvtIdx = partition(arr, st, end);
        quickSort(arr, st, pvtIdx - 1); 
        quickSort(arr, pvtIdx + 1, end);
    }
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}