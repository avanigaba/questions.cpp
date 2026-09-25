#include<iostream>
using namespace std;
void Printntoone(int n){
    // cout<<n<<" ";prints every value during recursive calls
    
   if (n== 0) return  ;//if (n==1){
                        //  cout<<1<<" ";
                        // return     0  ; }
   cout<<n<<" ";

    Printntoone(n-1);
 
}
int main(){
    int n ;
    
   
       cin>>n;

  
     Printntoone(n);


}