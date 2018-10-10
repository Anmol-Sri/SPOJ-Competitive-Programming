#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,k,sum,x;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		sum=0;
		scanf("%d",&n);
		scanf("%d",&k);
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&x);
			sum+=x;
		}
		printf("Case %d:%d\n\n",i,(((n+1)*k)-sum));
	}
}