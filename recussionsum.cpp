#include<iostream>
using namespace std;
int sum(int n){
    // cout<<n<<" ";prints every value during recursive calls
    
    if (n==0) return 0;
    int smallans=sum(n-1);
   int  output=n+smallans;
    return output;
}
int main(){
    int n ;
    
   
       cin>>n;

    int output=sum(n);
   
    cout<<output;

}