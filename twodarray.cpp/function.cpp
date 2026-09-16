#include <iostream>
using namespace std;
void printMatrix(int arr[][1000], int m, int n) {//function definition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }int sum=0;
    
}int main() {
    int m, n;
    cin >> m >> n;

    int arr[1000][1000]; // Declare a 2D array with a fixed size

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    printMatrix(arr, m, n); // Call the function to print the matrix

    return 0;
}