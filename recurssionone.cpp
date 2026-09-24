#include<iostream>
using namespace std;
int factorial(int n){
    // cout<<n<<" ";prints every value during recursive calls
    
    if (n==0) return 1;
    int smallans=factorial(n-1);
   int  output=n*smallans;
    return output;
}
int main(){
    int n ;
    
   
       cin>>n;

    int output=factorial(n);
   
    cout<<output;

}