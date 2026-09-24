#include<iostream>
using namespace std;
void Printoneton(int n){
    // cout<<n<<" ";prints every value during recursive calls
    
    if (n==0) return  ;
Printoneton(n-1);
  cout<<n<<" ";

}
int main(){
    int n ;
    
   
       cin>>n;

    Printoneton(n);
   


}