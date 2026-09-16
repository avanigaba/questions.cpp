#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int arr2[n]; // new array

    // Traverse original array from back
    for (int i = n - 1; i >= 0; i--) {
        arr2[n - i - 1] = arr[i];
    }

    // Copy reversed array to original array
    for (int i = 0; i < n; i++) {
        arr[i] = arr2[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n); // function call

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}