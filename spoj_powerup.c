#include <stdio.h>
#define p 1000000007

long long a,b,c,pos;
long long mu(long long x,long long y,long long mod)
{
    if(y==0)
        return 1;
    long long m=mu(x,y/2,mod);
    if(y%2)
        m=((m*m)%mod)*x;
    else
        m=m*m;
    m=m%mod;
    return m;
}
int main()
{
    scanf("%lld%lld%lld",&a,&b,&c);
    while(a>=0)
    {
        if(c==0)
            printf("%lld\n",a%p);
        else
            if(b==0)
            printf("%lld\n",1);
            else
                if(a%p==0)
                printf("%lld\n",a%p);
                else
                {
                pos=mu(b,c,p-1);
                a=mu(a,pos,p);
                printf("%lld\n",a);
                }
        scanf("%lld%lld%lld",&a,&b,&c);
    }
    return 0;
}
