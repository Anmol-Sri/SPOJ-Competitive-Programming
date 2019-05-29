#include <stdio.h>
using namespace std;
long long int arr[1000000000000001];
int fib(long long int n){
	if(n <=1) return 1;
	if(arr[n]!=0) return arr[n];
	long long int ans= fib(n-1)+fib(n-2);
	arr[n]=ans;
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
			int c,k;
			long long int n;
			scanf("%lld %d %d",&n,&c,&k);
			printf("Case %d: %lld",i,fib(n));
	}
	return 0;
}