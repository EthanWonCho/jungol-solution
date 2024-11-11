#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		if(!(i % 2)){
			for(int j=1;j<=n;++j){
				printf("%d ", j);
			}printf("\n");
		}else{
			for(int j=n;j>=1;--j){
				printf("%d ", j);
			}printf("\n");
		}
	}
	return 0;
}
