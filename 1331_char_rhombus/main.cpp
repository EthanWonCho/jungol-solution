#include <iostream>
using namespace std;

typedef struct _coor{
	int x, y;
} coor;
char rb[250][250] = {0}; //rhombus
coor pt; //pointer
char c;

char addc(){
	if(c == 'Z'){
		c = 'A';
		return 'Z';
	}else{
		c++;
		return c-1;
	}
}

void put_rb(char a){
	rb[pt.x][pt.y] = a;
	return;
}

void ch_pt(int x, int y){
	pt.x += x;
	pt.y += y;
	return;
}

void rnd(int n){
	if(n == 1){
		put_rb(c);
		return;
	}
	for(int i=1;i<n;++i){
		put_rb(addc());
		ch_pt(-1, 1);
	}
	for(int i=1;i<n;++i){
		put_rb(addc());
		ch_pt(1, 1);
	}
	for(int i=1;i<n;++i){
		put_rb(addc());
		ch_pt(1, -1);
	}
	for(int i=1;i<n;++i){
		put_rb(addc());
		ch_pt(-1, -1);
	}ch_pt(0, 1);
	rnd(n-1);
} //round

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	pt.x = N-1;
	pt.y = 0;
	c = 'A';
	rnd(N);
	for(int i=0;i<2*N-1;++i){
		for(int j=0;j<2*N-1;++j){
			if(!rb[j][i]){
				cout << "  ";
			}else cout << rb[j][i] << " ";
		}cout << "\n";
	}
	return 0;
}

