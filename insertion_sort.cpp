#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
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
    insertionSort(arr, n);
    printArr(arr, n);
}