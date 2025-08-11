#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallIndex = i; // unsorted part starting
        for (int j = i + 1; j < n; j++)  //loop goes till end to find smallest element
        {
            if (arr[j] < arr[smallIndex])
            {
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    selectionSort(arr, n);
    printArr(arr, n);
}