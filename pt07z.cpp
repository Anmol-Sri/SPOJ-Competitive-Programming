#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

void bfs(ll d[],vector<ll> g[],ll n,ll s){
	for(ll i=0;i<n;i++){
		d[i]=-1;
	}
	d[s]=0;
	queue<ll> q;
	q.push(s);
	ll u,v;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(auto it:g[u]){
			v=it;
			if(d[v]==-1){
				q.push(v);
				d[v]=d[u]+1;
			}
		}
	}
	return;
}

int main(){
	ll n,i,dist[10000000],a,b;
	scanf("%lld",&n);
	vector<ll> g[n];
	for(i=0;i<n-1;i++){
		scanf("%lld %lld",&a,&b);
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	ll d[10000000];
	bfs(d,g,n,0);
	ll maxdis=-1,index=0;
	for(i=0;i<n;i++){
		if(d[i]>maxdis){
			maxdis=d[i];
			index=i;
		}
	}
	bfs(d,g,n,index);
	maxdis=-1;
	for(i=0;i<n;i++){
		if(d[i]>maxdis){
			maxdis=d[i];
	//		index=i;
		}
	}
	printf("%lld\n",maxdis);
	return 0;
}