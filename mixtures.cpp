#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int Sum(int val[],int a,int b){
	int sumv=0;
	for(int i=a;i<=b;i++)
		sumv=(sumv+val[i])%100;
	return sumv;
}
int HarryMatMul(int val[],int a,int b){
	if(dp[a][b]!=0)
		return dp[a][b];
	else if(a==b) {
		dp[a][b]=0;
		return 0;
	}
	else{
		int temp;
		for(int k=a;k<=b;k++){
			temp=HarryMatMul(val,a,k)+HarryMatMul(val,k+1,b)+Sum(val,a,k)*Sum(val,k+1,b);
			if(dp[a][b]==0 || temp<dp[a][b]) dp[a][b]=temp;
		}
		return temp;
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int val[n];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)
			scanf("%d",&val[i]);
		printf("%d\n",HarryMatMul(val,0,n-1));
	}
	return 0;
}