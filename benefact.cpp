#include<bits/stdc++.h>
using namespace std;
int dist[50001];
struct node{
	int i,d;
};
int n;
typedef struct node node;
vector<node> v[50001];
//vector<bool>visited(50001,false);
int visited[50001];
//------------------------------------------------------------------------------------------
/*void DFS(vector<node>v[],int src,int prev_len,int *max_len,vector<bool>&visited) 
{
    visited[src] = 1; 
    int curr_len = 0; 
    pair < int, int > adjacent; 
    for (int i=0; i<v[src].size(); i++) 
    { 
        adjacent = v[src][i]; 
        if (!visited[adjacent.first]) 
        { 
            curr_len = prev_len + adjacent.second; 
            DFS(graph, adjacent.first, curr_len, 
                max_len,  visited); 
        } 
        if ((*max_len) < curr_len) 
            *max_len = curr_len; 
        curr_len = 0; 
    } 
} 
int longestCable(vector<node>v[],int n) 
{ 
    int max_len = INT_MIN; 
    for (int i=1; i<=n; i++) 
    {
        vector<bool>visited(n+1,false); 
        DFS(v,i,0,&max_len,visited); 
    }
    return max_len; 
} */
int bfs(int start){
	queue<int > q;
	q.push(start);
	int i,j;
	for(int i=0;i<=n;i++){
		visited[i]=0;
		dist[i]=0;
	}
	visited[start]=1;
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		for(i=0;i<v[temp].size();i++){
			if(visited[v[temp][i].i]==0){
				visited[v[temp][i].i]=1;
				dist[v[temp][i].i]+=dist[temp]+v[temp][i].d;
				q.push(v[temp][i].i);
			}
		}
	}
	return int(max_element(dist+1,dist+n+1)-dist);
}
//------------------------------------------------------------------------------------------

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		node temp;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) v[i].clear(); 
		for(int i=1;i<=n-1;i++){
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			temp.i=b;
			temp.d=c;
			v[a].push_back(temp);
			temp.i=a;
			v[b].push_back(temp);
		}
		int start=bfs(1);
		int maxdist=bfs(start);
		printf("%d\n",dist[maxdist]);
	}
	return 0;
}