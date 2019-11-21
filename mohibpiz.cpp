#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int ans=((n*n)+n+2)/2;
		cout<<ans<<"\n";
	}
	return 0;
}