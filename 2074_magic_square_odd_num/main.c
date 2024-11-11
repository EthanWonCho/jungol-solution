#include <stdio.h>
int sq[110][110] = {};
int N;

void print_sq(){
	for(int i=0;i<N;++i){
		for(int j=0;j<N;++j)
			printf("%d ", sq[j][i]);
		printf("\n");
	}
	printf("\n");
}

int main(void){
	int x, y = 0, cnt = 0;
	scanf("%d", &N);
	x = N/2;
	sq[x][y] = ++cnt;
	while(1){
		if(!(cnt % N)){
			++y;
		}else{
			--x;--y;
			if(x < 0 && y >= 0){
				x = N-1;
			}else if(x >= 0 && y < 0){
				y = N-1;
			}
		}
		sq[x][y] = ++cnt;
		if(cnt == N*N) break;
	}
		print_sq();
	return 0;
}
