#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <cassert>
#include <queue>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
#include <math.h>

#define GI ({int y;scanf("%d",&y);y;})
#define REP(i,N) for(int i = 0;i<(N);i++)
#define LET(x,a) __typeof(a) x(a)
#define sz size()
#define cs c_str()
#define REPV(i,ar) for(int i = 0;i<int((ar).size());i++)
#define FOR(i,a,b) for(int i =(a);i<=(b);i++)
#define EACH(it,mp) for(__typeof(mp.begin()) it(mp.begin());it!=mp.end();it++)
#define pb push_back
#define sor(ar) sort(ar.begin(),ar.end())
#define LINF (1e18)
#define INF (1<<30)
#define rev(ar) reverse(ar.begin(),ar.end())
using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long int LL;
#define MN int(1e6+1)
map<LL,bool> mp;
char temp[8];
LL POW10[18];

int main(){
	int N;	
	for(LL i = 0,t = 1;i < 15; ++i , t*=10 ) POW10[i] = t;	
	int T = 0;
	
	while( scanf("%d",&N) == 1 ){
		mp.clear();
		int L = sprintf(temp,"%d",N);
		int mark[10] = {},cc = 0;
		REP(i,L) cc += !mark[temp[i]-'0'],mark[temp[i]-'0'] = 1;
		if( cc == 6 ) {
			printf("Case %d, sequence = %d, cost = %d, length = %d\n",++T,N,5,11);
			continue;
		}
		
		set< pair<int,LL> > Q;
		for(int c = 0,t1 = N;t1;t1 /= 10,c++) Q.insert( PII(c,-t1) );
		for(int i = 0,x;temp[i];++i){
			sscanf(temp+i,"%d",&x);			
			Q.insert( PII(i,-x) );
		}
		
		while( Q.sz ){
			int c = Q.begin()->first;LL no = -Q.begin()->second;Q.erase(Q.begin());
			if( mp.count( no ) ) continue;mp[no] = true;
			
			int l = sprintf(temp,"%lld",no);
			int a = 0,b = l-1;
			while( a < b ) if( temp[a] != temp[b] ) break;else a++,b--;
			if( a >= b ) {				
				printf("Case %d, sequence = %d, cost = %d, length = %d\n",++T,N,c,l);
				break;
			}
			if( c+1 < L ){
				for(int i = 1;i <= 9; ++i ) 
					Q.insert( PII(c+1,-(LL(i)*POW10[l]+no)) ),
					Q.insert( PII(c+1,-(no*10 + i)) );
			}
		}		
	}
}