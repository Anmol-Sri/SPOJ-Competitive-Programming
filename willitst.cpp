#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	scanf("%lld",&n);
	if((n & (n-1))==0)
		printf("TAK\n");
	else printf("NIE\n");
	return 0;
}