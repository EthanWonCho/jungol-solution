#include <iostream>

using namespace std;
typedef struct {
	int x, y;
} coordinate;
int box[110][110] = {};//define box

void debug(int i){

	return;
}
int main(void){
	box[1][1] = 1;
	coordinate P;//define pointer
	P.x = 1;
	P.y = 1;
	int K = 1;

	//get userinput
	int n;
	cin >> n;

	//draw box border with -1s
	for(int i=0;i<=n;++i){
		box[i][0] = -1;
		box[i][n+1] = -1;
		box[0][i] = -1;
		box[n+1][i] = -1;
	}
	debug(0);

	while(K != n*n){//++K it when use.
		//Down or Right
		if(!box[P.x][P.y + 1]){//is 0: empty
			box[P.x][++P.y] = ++K;
		}else{
			box[++P.x][P.y] = ++K;
		}
		debug(1);

		//Upper Right
		while(!box[P.x + 1][P.y - 1]){//empty
			box[++P.x][--P.y] = ++K;
		}
		debug(2);

		//Right or Down
		if(!box[P.x + 1][P.y]){//is 0: empty
			box[++P.x][P.y] = ++K;
		}else{
			box[P.x][++P.y] = ++K;
		}
		debug(3);

		//Down Left
		while(!box[P.x - 1][P.y + 1]){//empty
			box[--P.x][++P.y] = ++K;
		}
		debug(4);
	}

	//print
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cout << box[j][i] << " ";
		}cout << endl;
	}

}
/*


*/
