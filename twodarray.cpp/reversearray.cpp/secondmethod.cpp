#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        // swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // update pointers
        i++;
        j--;
    }
}

bool compareTwoArrays(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    reverseArray(arr1, n);

    bool ans = compareTwoArrays(arr1, arr2, n);

    cout << ans;

    return 0;
}