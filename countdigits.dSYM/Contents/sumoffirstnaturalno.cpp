#include<iostream>
using namespace std;
int sumoffirstn(int n){
    if (n==0)return 0;
    int smallans=sumoffirstn(n-1);
    int output= smallans+n;
    return output;

}int main(){
    int n; 
    cin>>n;
sumoffirstn(n);
cout<<sumoffirstn(n);
}