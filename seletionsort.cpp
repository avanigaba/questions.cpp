#include<iostream>
using namespace std;
void selectionsort(int n ,int arr[])
{ 
    for (int i=0 ; i<n-1; i++){
    int minIndex=i;
    for(int j= i+1; j<n; j++){
        if ( arr[minIndex]>arr[j]){
            minIndex=j;
        }

    }
        swap(arr[i],arr[minIndex]);
} 
}

int main()
{
    int n ; 
    int arr[100];
    cin>>n ;
    for (int i =0 ; i<n; i++){
        cin >> arr[i];
    }
    
    selectionsort( n,arr );

for (int i =0 ; i<n; i++){
        cout<< arr[i]<<" ";
    }
}

