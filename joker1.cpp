#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		long long int prod=0;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		prod=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]<=i) prod=0;
			else prod =(prod * (arr[i]-i)) % MOD;
		}
		cout <<prod<<endl;
	}
	cout<<"KILL BATMAN"<<endl;
	return 0;
}