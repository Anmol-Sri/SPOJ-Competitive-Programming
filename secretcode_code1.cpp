#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <sstream>
using namespace std;
 
#define REP(i,N) for(int i=0;i<N;i++)
#define REPV(i,ar) for(int i=0;i<ar.size();i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define EACH(it,mp) for(_typeof(mp.begin()) it=mp.begin();it!=mp.end();it++)
#define sor(ar) sort(ar.begin(),ar.end())
#define rev(ar) reverse(ar.begin(),ar.end())
#define GI ({int t;scanf("%d",&t);t;})
#define INF (1<<30)
#define LINF (1e18)
#define GETN(V) for(int i=GI;i;i--) V.pb(GI)
#define pb push_back
#define VI vector<int>
#define VS vector<string>
typedef long long int LL;
typedef pair<int,int> PII;
int maxmod;
int Con;
VI Cof;
int a,b,cnt;
 
void go(PII X){
	int x = X.first,y = X.second;
	int newx = INF ,newy = INF;
	if(!x && !y) return;
	cnt++;
	if( cnt > 101 ) throw 1;
	bool flag = false;
 
	FOR(i,0,maxmod){
		newx = x-i,newy = y;	
		if( (newx*a+newy*b)%Con==0 && (newy*a-newx*b)%Con==0){
			Cof.pb(i);
			flag = true;
			break;
		}
	}
	if(!flag) throw 1;
	go( PII((newx*a+newy*b)/Con,(newy*a-newx*b)/Con));
}
 
int main(){
	int T = GI;
	REP(t,T){
		Cof.clear();
		int x = GI,y = GI;
		cnt = 0;
		a = GI,b = GI;
		maxmod = int(hypot(a,b));
		Con = a*a + b*b;
		try{
			if(!x && !y){
				printf("0\n");
				continue;
			}
			go(PII(x,y));
			rev(Cof);
			REPV(i,Cof) printf("%s%d",i?",":"",Cof[i]);
			printf("\n");
		}
		catch(int){
			printf("The code cannot be decrypted.\n");			
		}
	}
}