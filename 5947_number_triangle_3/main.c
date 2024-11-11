#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	if(!(0 < n && n < 50 && n % 2)){
		printf("INPUT ERROR!");
		return 0;
	}
	for(int i=1;i<=n/2;++i){
		for(int j=1;j<=i;++j)
			printf("%d ", j);
		printf("\n");
	}
	for(int i=n/2+1;i<=n;++i){
		for(int j=1;j<=n+1-i;++j)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}
