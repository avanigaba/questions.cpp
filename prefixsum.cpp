// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>prefixSum (vector<int>& arr){
   
  
// int n = arr.size();


//    vector<int>prefixSum(n);
//    prefixSum[0]=arr[0];
//    for (int i=1; i<n; i++){
//  prefixSum[i] = arr[i]+prefixSum[i-1];
//    }
// return prefixSum ;
// }

//   int main() {
//     int n ;
   

// cin>>n;
// vector<int> arr(n);
// for (int i=0; i<n; i++){ 
//     cin>>arr[i];
// } 
//  prefixSum(arr);
  
// for (int i=0; i<n; i++){ 
//     cout<<arr[i];}
//     return 0;

//   }
#include <iostream>
#include <vector>
using namespace std;

void prefixSum(vector<int>& arr) {

    int n = arr.size();

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    prefixSum(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
