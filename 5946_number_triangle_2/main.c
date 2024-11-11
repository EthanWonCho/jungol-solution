#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	if(!(0 < n && n < 50 && n % 2)){
		printf("INPUT ERROR!");
		return 0;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<i*2;++j) printf(" ");
		for(int j=0;j<2*(n-i)-1;++j) printf("%d ", i);
		printf("\n");
	}
	return 0;
}
