#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
vector<long long int>v[100002];
long int n,m,p,q;
long int maxi = -1;
bool visited[100002];
long int  cont= 0;
bool isprime(long long n)
{
  long long l,i,j,k;
int flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
}if(flag==1)
        return false;
        else
            return true;
}
void dfs(long long int src )
{
 visited[src]=true;
    cont++;
    for(long long i=0;i<v[src].size();i++)
    {
        if(!visited[v[src][i]])
        {
           
            dfs(v[src][i]);
        }
    }  
}
int main() {
    int t;
    long long i;
    cin>>t;
    for(int ii=0;ii<t;ii++)
    {
        maxi = -1;
        cont = 0;
        for(i=0;i<100002;i++)
        {
           v[i].clear();
            visited[i]=false;
        }
        scanf("%lld %lld",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld %lld",&p,&q);
            v[p].push_back(q);
            v[q].push_back(p);
        }
        dfs(1);
        for(i=1;i<=n;i++)
        {
            if(isprime(cont))
            {
                if(maxi<cont)
                {
                    maxi = cont;
                }
            }
            if(visited[i]==false)
            {
            cont = 0;
                dfs(i);
            }
        }
        
        if(maxi>1)
        cout<<maxi<<endl;
        else
            cout<<"-1"<<endl;
    }
}