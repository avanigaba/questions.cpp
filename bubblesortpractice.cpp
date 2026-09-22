#include<iostream>
using namespace std;
void bubblesort(int n , int arr[]){
    for(int i =0; i<n-1 ; i++){
        for ( int j= 0; j<n-i-1 ; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
        }
              } 
    }
}
int main() {
    int arr[100];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubblesort( n,arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}