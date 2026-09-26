#include<iostream>
using namespace std;
int power(int x ,int n ){
    if (n == 0)
    return 1;
int smallans=power(x,n/2);
int ans =0;
if (n%2==0)
ans = smallans*smallans;
else 
ans= smallans*smallans*x;

    // int smallans= power(x,n-1);or it can be other way
// int ans= x*smallans;
return ans;
}int main(){
    int n ,x;
    cin>>x>>n;
power(x , n );
cout<<power(x , n );

}