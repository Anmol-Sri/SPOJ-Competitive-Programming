#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       float a,h,m,re;
       int j,k,c=0;
       scanf("%f",&a);
       for(j=1;j<=12;j++)
       {
           for(k=0;k<60;k++)
           {
               h=j*30;
               m=k*6;
               h=h+k*0.5;
               re=fabsf(h-m);
               if(re>180)
               re=re-180;
               if(a==re)
               {
                   c++;        
               }
               
           }
       }
       printf("Case %d: %d\n",i+1,c);
    }
    return 0;

}