#include <stdio.h>

int main(void) {

	int t,x,y;

	double pro;

	scanf("%d",&t);
	
	while(t--){

		scanf("%d",&x);

		scanf("%d",&y);

		pro=(x*y)+((100-x)*(100-y));

		pro/=100;

		printf("%.2f%\n",pro);

	}

	return 0;

}