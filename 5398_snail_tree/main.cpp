#include <iostream>
//#include <iomanip>
#include <vector>
#include <list>

using namespace std;

int v[110][110];

typedef struct _coor{
	int x, y;
} coor;

void write(int N);
int main(void){
	int N;
	cin >> N;
	write(N);
	for(int i=1;i<=N;++i){
		for(int j=0;j<N-i;++j) cout << " ";
		for(int j=1;j<=i;++j){
			//***********************
			cout << v[j][i] << " ";
			//***********************
		}cout << "\n";
	}
	return EXIT_SUCCESS;
}
void write(int N){
	for(int i=0;i<N+2;++i){
		for(int j=0;j<N+2;++j){
			v[i][j] = -1;
		}
	}
	//border
	for(int i=0;i<N+2;++i){
		v[0][i] = -2;
		v[i][N+1] = -2;
		v[i+1][i] = -2;
	}
	coor now;
	int num = 0;
/*0: SE
	1: W
	2: N */
	now.x = 1;now.y=1;
	
	writest:
	//zero
	while(v[now.x][now.y] == -1){
		v[now.x][now.y] = num;
		++now.y;++num;
		if(num == 10) num = 0;
	}--now.y;
	if(v[++now.x][now.y] != -1) return;

	//uno
	while(v[now.x][now.y] == -1){
		v[now.x][now.y] = num;
		++now.x;++num;
		if(num == 10) num = 0;
	}--now.x;
	if(v[--now.x][--now.y] != -1) return;

	//dos
	while(v[now.x][now.y] == -1){
		v[now.x][now.y] = num;
		--now.x;--now.y;++num;
		if(num == 10) num = 0;
	}++now.x;++now.y;
	if(v[now.x][++now.y] != -1) return;
	else goto writest;
}

