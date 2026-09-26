
#include<iostream>
using namespace std;
int countDigits(int n){
	if (n==0) 
	return 0;
int smallans=countDigits(n/10);
int output= smallans+1;
return output;

}int main()
{
	int n;
	cin>>n;
	int output = countDigits(n);
	cout<< output;
	return 0;
}