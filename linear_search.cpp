#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {22, 4, 6, 88, 54};
    int size = 5;
    int target = 60;
    int result = linearSearch(arr, target, size);
    cout << "The value is: " << result;
    return 0;
}