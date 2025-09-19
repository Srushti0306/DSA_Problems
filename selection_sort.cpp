// In selection sort we search for smallest ele and then swap it with first
// ans then second smallest element and then swap with second col element

#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minvalue=i;
        for (int j = i+1; j < n; j++)
        {
           if(arr[j]<arr[minvalue]){
            minvalue=j;
           }
        }
        //swap
        int temp=arr[i];
        arr[i]=arr[minvalue];
        arr[minvalue]=temp;  
    }
}

int main()
{
    int arr[] = {44, 56, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}