// int countofdigits(int n)
// {
// 	if(n==0)return 0;
// 	int smallans =countofdigits(n/10);
// 	int ld= n%10;
// 	int ld= n%10;
// 	smallans+=1;
// 	return smallans;
// }n changes
//stor n
int countofdigits(int n)
{
    int countofdigits_helper(int n, int orgnum){
	if(n==0) return 0;
int smallans =countofdigits(n/10, orgnum);
int ld= n%10;
 if(ld!=0&& orgnum%ld==0)
return smallans;
    }return countdigits_helper(n,n)
}
