#include<bits/stdc++.h>
#include<stdio.h>
#define MOD 1000007
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int l;
		scanf("%lld",&l);
		unsigned long long int ans;
		ans=2*((l*(l+1))/2)+((l*(l-1))/2);
		printf("%llu\n",ans%MOD);
	}
	return 0;
}