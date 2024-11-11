#include <iostream>
using namespace std;

int R[40][40] = {1};

void pascal(int n, int now);

int main(void){
	int n, m;
	cin >> n >> m;
	pascal(n, 2);
	switch(m){
		case 1:
			for(int i=0;i < n;++i){
				for(int j=0;j<=i;++j){
					std::cout << R[i][j] << " ";
				}std::cout << endl;
			}
		break;
		case 2:
			for(int i=n-1;i>=0;--i){
				for(int j=0;j<n-1-i;++j) std::cout << " ";
				for(int j=0;j<=i;++j){
					std::cout << R[i][j] << " ";
				}std::cout << endl;
			}
		break;
		case 3:
			for(int i=0;i < n;++i){
				for(int j=0;j<=i;++j){
					std::cout << R[n-j-1][n-i-1] << " ";
				}std::cout << endl;
			}
		break;
		default:
			exit(1);
	}
	
	return EXIT_SUCCESS;
}

void pascal(int n, int now){
	if(n + 1 == now){
		return;
	}
	for(int i=0;i<now;++i){
		if(i == 0 || i == now-1){
			R[now-1][i] = 1;
			continue;
		}
		R[now-1][i] = R[now-2][i] + R[now-2][i-1];
	}
	pascal(n, now+1);
}

