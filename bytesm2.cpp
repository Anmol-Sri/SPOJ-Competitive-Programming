#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,c;
		scanf("%d %d",&r,&c);
		int arr[r][c];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		for(int i=1;i<r;i++){
			for(int j=0;j<c;j++){
				if(j>0 && j<c-1)
					arr[i][j]+=max(arr[i-1][j],max(arr[i-1][j-1],arr[i-1][j+1]));
				else if(j>0)
					arr[i][j]+=max(arr[i-1][j],arr[i-1][j-1]);
				else if(j<c-1)
					arr[i][j]+=max(arr[i-1][j],arr[i-1][j+1]);
			}
		}
		int res=0;
		for(int j=0;j<c;j++)
			res=max(arr[r-1][j],res);
	printf("%d\n",res);
	}
}