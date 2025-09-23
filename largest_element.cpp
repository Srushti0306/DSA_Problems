#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
    int first = INT_MIN;   // largest
    int second = INT_MIN;  // second largest

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            // update both
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            // update only second
            second = arr[i];
        }
    }

    return (second == INT_MIN ? -1 : second); // -1 if no second largest
}

int main() {
    int arr[] = {20, 60, 6, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sec = secondLargest(arr, n);
    if (sec == -1)
        cout << "No second largest exists\n";
    else
        cout << "Second largest element: " << sec << "\n";
    return 0;
}
