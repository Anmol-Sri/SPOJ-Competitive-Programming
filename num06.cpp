#include <stdio.h> 
long long int gcd(long long int a,long long int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
} 
int main() 
{ 
	long long int a,b,temp;
	while(1){
		scanf("%lld %lld",&a,&b);
		if(a==0 && b==0) break;
		if(a<b){
			temp=a;
			a=b;
			b=temp;
		}
		printf("%lld\n",gcd(a,b));
	}
	return 0; 
} 
