#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		long long int ans;
		ans=ceil((sqrt(1+8*(n-1))-1)/2);
		printf("%lld\n",ans);
	}
	return 0;
}