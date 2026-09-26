#include<iostream>
using namespace std;
int sumofdigits(int n){
    if(n==0)return 0;
    int smallans=sumofdigits(n/10);
    int ld = n%10;
    int output =smallans+ld;
    return output;
}int main (){
    int n; 
    cin>>n;
    sumofdigits(n);
    cout<<sumofdigits(n);
}