#include<bits/stdc++.h>
using namespace std;
#define LL long long
  
LL a[200009];
LL b[200009];
LL tree[200009];
LL n;
  
void update(LL idx,LL val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=idx&-idx;
    }
}
  
LL query(LL idx)
{
    LL ret=0;
    while(idx>0)
    {
        ret+=tree[idx];
        idx-=idx&-idx;
    }
    return ret;
}
  
int main()
{
    LL i,j,k,m,d,test,t=0;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        memset(tree,0,sizeof(tree));
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            d=lower_bound(b,b+n,a[i])-b;
            a[i]=d+1;
        }
        LL ans=0;
        for(i=n-1;i>=0;i--)
        {
            ans=ans+query(a[i]-1);
            update(a[i],1);
        }
        printf("%lld\n",ans);
    }
    return 0;
}