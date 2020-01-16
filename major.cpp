#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int temp;
		unordered_map<int, int> m;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			m[temp]++;
		}


		int count = 0; 
	    for(auto i : m) 
	    { 
	        if(i.second>n/2) 
	        {
	            count =1; 
	            printf("YES %d\n",i.first);
	            break; 
	        } 
	    } 
	    if(count == 0) 
	        printf("NO\n");
	}
	return 0;
}