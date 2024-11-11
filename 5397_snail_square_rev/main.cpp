#include <cstdio>

int N;
int sq[110][110];

void prt(){
	for(int i=1;i<N;++i){
		for(int j=1;j<N;++j){
			printf("%d ", sq[i][j]);
		}printf("\n");
	}
	return;
}
void loop(int dir/*direction*/, int row, int col, int num){
	if(sq[row][col]) return;
	switch(dir){
	case 1://col--
		while(!sq[row][col]){
			sq[row][col--] = num++;
		}
		loop(2, ++row, ++col, num);
	break;
	case 2://row++
		while(!sq[row][col]){
			sq[row++][col] = num++;
		}
		loop(3, --row, ++col, num);
	break;
	case 3://col++
		while(!sq[row][col]){
			sq[row][col++] = num++;
		}
		loop(4, --row, --col, num);
	break;
	case 4://row--
		while(!sq[row][col]){
			sq[row--][col] = num++;
		}
		loop(1, ++row, --col, num);
	break;
	}
}
int main(void){
	scanf("%d", &N);
	N++;
	for(int i=0;i<N+2;++i){
		sq[i][0] = 1;
		sq[i][N] = 1;
	}
	for(int i=1;i<N;++i){
		sq[0][i] = 1;
		sq[N][i] = 1;
	}
	loop(1, 1, N-1, 1);
	printf("\n\n");
	prt();
	return 0;
}
