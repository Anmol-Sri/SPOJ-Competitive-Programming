#include <iostream>
#include <cstdio>
using namespace std;
int phi (int n) 
{
   int ans=n;
   for (int i=2; i*i<=n; ++i)
   if(n%i==0) 
   {
	 while(n%i==0)
	     n=n/i;
     ans=ans-ans/i;
   }
   if(n>1)
	ans=ans-ans/n;
 return ans;
}
int main()
{
	int i,j,n,t,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d",&n);
		printf("%d\n",phi(n));
	}
	return 0;
}