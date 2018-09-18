#include<stdio.h>
#include<math.h>
int main(){
	long long int t,a;
	long double s1,s2,s3,h;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&h);
		scanf("%lld",&a);
		s1=(sqrt((h*h)+(4*a))+sqrt((h*h)-(4*a)))/2.0;
		s2=(sqrt((h*h)+(4*a))-sqrt((h*h)-(4*a)))/2.0;
		if((h*h)==(int)floor((s1*s1)+(s2*s2))){
			if(s1<s2 && s1<h){
				printf("%.6Lf ",s1);
				if(s2<h){
					printf("%.6Lf ",s2);
					printf("%.6Lf ",h);
				}
				else{
					printf("%.6Lf ",h);
					printf("%.6Lf ",s2);
				} 
			}
			else if(s2<s1 && s2<h){
				printf("%.6Lf ",s2);
				if(s1<h){
					printf("%.6Lf ",s1);
					printf("%.6Lf ",h);
				}
				else{
					printf("%.6Lf ",h);
					printf("%.6Lf ",s1);
				}
			}
			else{
				printf("%.6Lf ",h);
				if(s1<s2){
					printf("%.6Lf ",s1);
					printf("%.6Lf ",s2);
				}
				else{
					printf("%.6Lf ",s2);
					printf("%.6Lf ",s1);
				}
			}		
		}
		else{
			printf("-1");
		}
		printf("\n");
	}
	return 0;
}