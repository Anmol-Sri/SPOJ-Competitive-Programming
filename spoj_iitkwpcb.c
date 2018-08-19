#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int n,c;
    scanf("%lld",&n);
    if(n%2==0)
    {
        c=n/2 - 1;
        if(c%2==0)
            printf("%lld\n",c-1);
        else
            printf("%lld\n",c);
    }
    else
    {
        printf("%lld\n",n/2);
    }
}
return 0;
}
