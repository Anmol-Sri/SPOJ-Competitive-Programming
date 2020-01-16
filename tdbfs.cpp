#include<cstdio>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
unsigned int tests,
			 verts,
			 vert,
			 neighbours,
			 neighbour,
			 type;
bool visited[1024];
vector<unsigned int> graph[1024];
void BFS(int);
void DFS(int);
int main(void)
{
	scanf("%u", &tests);
	for(unsigned int t = 0; t < tests; ++ t)
	{
		scanf("%u", &verts);
		for(unsigned int v = 1; v <= verts; ++ v)
			graph[v].clear();

		for(unsigned int v = 0; v < verts; ++ v)
		{
			scanf("%u%u", &vert, &neighbours);
			for(unsigned int n = 0; n < neighbours; ++ n)
			{
				scanf("%u", &neighbour);
				graph[vert].push_back(neighbour);
			}
		}

		printf("graph %u\n", t + 1);
		while(scanf("%u%u", &vert, &type) != -1 && vert != 0)
		{
			for(unsigned int v = 1; v <= verts; ++ v)
				visited[v] = false;

			if(type)
				BFS(vert);

			else
				DFS(vert);

			puts("");
		}
	}

	return 0;
}

void BFS(int v)
{
	std::queue<unsigned int> que;
	que.push(v);
	visited[v] = true;
	while(!que.empty())
	{
		v = que.front();
		printf("%u ", v);
		que.pop();
		for(unsigned int n = 0; n < graph[v].size(); ++ n)
			if(!visited[graph[v][n]])
			{
				visited[graph[v][n]] = true;
				que.push(graph[v][n]);
			}
	}

	return;
}

void DFS(int v)
{
	printf("%d ", v);
	visited[v] = true;
	for(unsigned int n = 0; n < graph[v].size(); ++ n)
		if(!visited[graph[v][n]])
			DFS(graph[v][n]);

	return;
}