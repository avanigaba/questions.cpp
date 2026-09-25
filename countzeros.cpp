#include<iostream>
using namespace std;
int countzeros(int n){
    if  (n==0 )

    return 0;
int smallans = countzeros(n/10);
if (n %10 ==0 )
smallans+=1;
return smallans;

}int main()
{
    int n ;
    cin>>n;
    
  
    cout<<countzeros(n);
}