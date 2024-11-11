#include <stdio.h>
#define RIGHT 1
#define LEFT 0

void I_LIKE_BARADU(){return;}

int main(void){
	int 方 = RIGHT, n, k = 0;
	scanf("%d", &n);
	if(!(0<n && n<50 && n % 2)){
		printf("INPUT ERROR!");
		return 0;
	}
	for(int i=1;i<=n;++i){
		if(方 == RIGHT){
			I_LIKE_BARADU();
			for(int j=0;j<i;++j){
				printf("%d ", ++k);
			}printf("\n");
			方 = LEFT;
		}else{
			I_LIKE_BARADU();
			k += i;
			for(int j=0;j<i;++j){
				printf("%d ", k--);
			}printf("\n");
			方 = RIGHT;
			k += i;
		}
	}
	return 0;
}
