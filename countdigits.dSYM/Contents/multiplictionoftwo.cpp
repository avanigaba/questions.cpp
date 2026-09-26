#include<iostream>
using namespace std;
int multiplicationofdigits(int n ,int m){
if (n==1&&m==1)
return 1;
    int smallans=n*(m-1);
int output = smallans+n;
return output;
} 
int main()
{
    int n,m;
    cin>>n>>m;
     multiplicationofdigits(n,m);
     cout<<multiplicationofdigits(n,m);
}