#include<iostream>
#include<stdio.h>
#include<cstdio>
#define ll long long int
using namespace std;
int prime(ll);
int check(ll);
int check(ll n){
	while(n!=0){
		if(n%10==0 || n%10==1 || n%10==4 || n%10==6 || n%10==8 || n%10==9)
			return 0;
		n=n/10;
	}
	return 1;
}
int prime(ll n){
	ll i;
	if(n==1) return 0;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			return 0;
	return 1;	
}
int main(){
	int t;
	cin>>t;
	for(int q=1;q<=t;q++){
		ll n;
		cin>>n;		
		for(;n>0;n--){
			if(prime(n)==1 && check(n)==1){
				printf("Case %d: %lld\n",q,n);
				break;
			}
		}
	}
}