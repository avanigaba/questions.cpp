 #include<iostream>
using namespace std;
bool compareArray(int arr1[], int arr2[], int n){
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;

    
} int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    bool ans=compareArray(arr1,arr2,n);
    cout<<ans;
    return 0;
}