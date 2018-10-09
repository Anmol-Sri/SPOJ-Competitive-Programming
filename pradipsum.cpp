#include<iostream>
#include<cstdio>
using namespace std;
#define LL long long int
int main()
{	 
	LL a,b,i,sum=0;
	while(scanf("%lld%lld" ,&a, &b) != EOF)
	{
		sum=0;
		if(a>b)
			for(i=b;i<=a;i++)
				sum+=i;
			else
				for(i=a;i<=b;i++)
					sum+=i;
		printf("%lld\n\n",sum);		
	}
}