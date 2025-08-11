#include <iostream>
using namespace std;

void uniqueEle(int arr[], int size)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        bool unique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << "No unique elements found.";
    }
}

int main()
{
    int arr[] = {
        22,
        4,
        6,
        88,
        54,
        22,
        6,
        88
        };
    int size = 8;
    cout << "The value is: " ;
    uniqueEle(arr, size);
    return 0;
}