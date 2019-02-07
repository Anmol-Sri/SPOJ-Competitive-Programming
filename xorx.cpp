#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h> 
#define ll long long int;
using namespace std;
int main(){
	int t;
	cin>>t;		
	while(t--){
		int n,x,ans=0;
		int i,j;
		scanf("%d %d",&n,&x);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			int cux=0;
			for(j=i;j<n;j++){
				cux=cux^arr[j];
				if((ans^x)<=(cux^x))
					ans=cux;
				else ans=ans;
			}
		}
		printf("%d\n",ans);
	}

}