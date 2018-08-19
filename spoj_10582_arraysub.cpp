#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int n,i,k,x;
	deque<int> q;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		q.push_back(x);
	}

	cin>>k;
	for(i=0;i<n-k+1;i++)
	{
		cout<<*max_element(q.begin()+i,q.begin()+i+k)<<" ";
	}

	return 0;
}
