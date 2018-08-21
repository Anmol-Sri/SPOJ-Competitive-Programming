
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  char a[1000001];
long long int i,j,k,t,n,count,p,maxi,onescount;
//taking no of test cases input
cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
    memset(a,'f',sizeof(a));
    count=0;
    onescount =0;
    maxi =0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>p;
    if(p==1){
        onescount++;
    }
    if(p>maxi)
    maxi = p;
    if(a[p]=='f')
    a[p]='t';
    else{
//I have adding to count if is more than one.
//suppose there are 4 twos in sequence I have added 3 to count and remaining 1 in 4  is added //later  in logic
    a[p]='m';
    count++;
        }
        }
        //if there is atleast one 1 in sequence case and in else block more than 1 one case
    if(onescount==1)
        {
        cout<<"Case "<<ii<<": "<< n-1<<endl;
        continue;
        }
    else if(onescount>1)
        {
        cout<<"Case "<<ii<<": "<< n<<endl;
        continue;
        }
          //we have said that extra 1 will be adding count here incase of 'm'
        for(i=2;i<=maxi;i++)
        {
            if(a[i]=='m')
                count++;
        }
        //only  counting upto square root of maximum element in sequence is enough
        for(i=2;i<=sqrt(maxi);i++)
        {
             if(a[i]=='t'){
                long long r = i;
                r=r*i;
            while(r<=maxi)
            {
                if(a[r]=='m'||a[r]=='t')
                {
                    //if I found element like a power(k) I will increment count and break
                    count++;
                    
                    break;
                }
                r=r*i;
            }
            }
        }
            cout<<"Case "<<ii<<": "<< count<<endl;
    }
    return 0;
}