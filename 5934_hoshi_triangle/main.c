#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	scanf("%d", &n);
	if(!(0 < n && n < 100 && n % 2)){
		fprintf(stdout, "INPUT ERROR!");
		return 0;
	}
	for(int i=0;i< n / 2;++i){
		for(int j=0;j<i;++j) printf(" ");
		for(int j=0;j<n/2+1-i;++j) printf("*");
		printf("\n");
	}
	for(int i=n/2;i<n;++i){
		for(int j=0;j<n/2;++j) printf(" ");
		for(int j=0;j<i-n/2+1;++j) printf("*");
		printf("\n");
	}
	return 0;
}
