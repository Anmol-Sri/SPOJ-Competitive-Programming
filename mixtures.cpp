#include<bits/stdc++.h>
using namespace std;
long long int dp[100][100]={-1};
long long int sum(int *a,int l,int r)
{
    long long int i,ans=0;
    for(i=l;i<=r;i++)
        ans=(ans+(*(a+i)))%100;
    return ans;
}
long long int sol(int *a,int l,int r)
{
    if(l>=r)
        return 0;
    if(dp[l][r]!=-1)
    {
        return dp[l][r];
    }
    else
    {
        int k;
        dp[l][r]=INT_MAX;
        for(k=l;k<r;k++)
        {
            dp[l][r]=min(dp[l][r],sol(a,l,k)+sol(a,k+1,r)+sum(a,l,k)*sum(a,k+1,r));
        }
        return dp[l][r];
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<100;i++)
            for(int j=0;j<100;j++)
                dp[i][j]=-1;
        printf("%lld\n",sol(a,0,n-1));
    }
    return 0;
}
