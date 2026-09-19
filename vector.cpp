#include<iostream>
#include<vector>
using namespace std;
vector<int>prefixSum (vector<int>&arr){
   vector<int> ans;
   int sum= 0;
int n = arr.size();


    for (int i = 0 ; i<arr.size() ;i++){
        sum+=arr[i];
        ans.push_back(sum);

    }
return ans;
}
int main(){
    int n; 
    cin>>n;
    vector<int>arr(n);
    for (int i = 0 ; i<n; i++){
        cin >>arr[i];

    }
  
    vector<int> ans = prefixSum(arr);
     for(int i = 0 ; i<n ;i++){
        cout<<ans[i]<<" ";
}
}
