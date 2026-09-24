#include<iostream>
using namespace std;
int product(int  n){
    // cout<<n<<" ";prints every value during recursive calls
    
    if (n==1) return 1;
    int smallans=product(n-1);
   int  output=n*smallans;
    return output;
}
int main(){
    int n ;
    
   
       cin>>n;

    int output=product(n);
   
    cout<<output;

}