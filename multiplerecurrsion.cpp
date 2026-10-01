#include<iostream>
using namespace std;
int fibonacci(int n){
    // cout<<n<<" ";prints every value during recursive calls
    
    if (n==0) return 0;
      if (n==1) return 1;
    int smallans1=fibonacci(n-1);
     int smallans2=fibonacci(n-2);
   int  output=smallans1+smallans2;
    return output;
}
int main(){
    int n ;
       cin>>n;
    int output=fibonacci(n);
    cout<<output;
}