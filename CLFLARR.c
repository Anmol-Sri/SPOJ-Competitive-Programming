#include<stdio.h>
int main(){
	int n,q,l,r,c,i;
	int arr[200000];
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++) arr[i]=0;
	while(q--){
		scanf("%d %d %d",&l,&r,&c);
		for(i=l-1;i<r;i++) arr[i]=c;
	}
	for(i=0;i<n;i++) printf("%d\n",arr[i]);
	
	return 0;
}