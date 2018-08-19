#include<stdio.h>
long long modexpo(long long a,long long b,int n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    while(n)
    {
        long long a,b,c,d,ans;
        b=modexpo(n,k,10000007);
        a=(2*modexpo(n-1,k,10000007))%10000007;
        d=modexpo(n,n,10000007);
        c=(2*modexpo(n-1,n-1,10000007))%10000007;
        ans=((a+b)%10000007+(c+d)%10000007)%10000007;
        printf("%lld\n",ans);
        scanf("%lld%lld",&n,&k);
    }
    return 0;
}
