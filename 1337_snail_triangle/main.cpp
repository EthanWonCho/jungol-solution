#include <iostream>
#include <iomanip>
#include <vector>
#include <list>

using namespace std;

int v[110][110];

typedef struct _coor{
	int x, y;
} coor;

//vector<vector<int>> write(int N);
void write(int N);
int main(void){
	int N;
	cin >> N;
	write(N);
	for(int i=1;i<=N;++i){
		for(int j=1;j<=i;++j){
			cout << v[j][i] << " ";
		}cout << "\n";
	}
	return EXIT_SUCCESS;
}
//vector<vector<int>> write(int N){
void write(int N){
	/*vector<vector<int>> v(N+3);
	for(int i=0;i<N+2;++i) v[i].assign(i+3, -1);
	*/
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
	int direction = 0;
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
		++now.x;++now.y;++num;
		if(num == 10) num = 0;
	}--now.x;--now.y;
	if(v[--now.x][now.y] != -1) return;

	//uno
	while(v[now.x][now.y] == -1){
		v[now.x][now.y] = num;
		--now.x;++num;
		if(num == 10) num = 0;
	}++now.x;
	if(v[now.x][--now.y] != -1) return;

	//dos
	while(v[now.x][now.y] == -1){
		v[now.x][now.y] = num;
		--now.y;++num;
		if(num == 10) num = 0;
	}++now.y;
	if(v[++now.x][++now.y] != -1) return;
	else goto writest;
}

/*

<<2>>
0
2 1  == 2 > 2

<<3>> + borders(A)
A A
A 0 A
A 5 1 A == 2 . 5
A 4 3 2 A
A A A A A

<<4>>
0
8 1
7 9 2  == 3 ^ 9
3 5 4 3

<<5>>
0
1 1
0 2 2
9 4 3 3  == 4 > 4
8 7 6 5 4

<<6>>
0
4 1
3 5 2
2 0 6 3  == 4 . 0
1 9 8 7 4
0 9 8 7 6 5

<<7>>
0
7 1
6 8 2
5 6 9 3
4 5 7 0 4  == 5 ^
3 4 3 2 1 5
2 1 0 9 8 7 6

(N+1)%2+1

e
e e
e e e
e e e e
e e e e e
e e e e e e
e e e e e e e


*/

