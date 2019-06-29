#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h> 
#define ll long long int;
using namespace std;
int main(){
	int t;
	scanf("%d",&t);	
	while(t--){
		int n,x,ans=0;
		int i,j;
		scanf("%d %d",&n,&x);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			int cux=arr[i];
			for(j=i+1;j<n;j++){
				cux=cux^arr[j];
				ans=max(cux);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}