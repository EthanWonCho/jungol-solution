#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int N, M[110];
	bool primes[1000010];// 1,000,000
	cin >> N;
	for(int i=0;i<N;++i){
		cin >> M[i];
	}
	fill_n(primes, 1000002, true);
	primes[1] = false;
	for(int i=2;i<1000001;++i){
		if(primes[i]){
			for(int j=2;i*j < 1000000;++j){
				primes[i*j] = false;
			}
		}
	}

	for(int i=0;i<N;++i){
		if(primes[M[i]]){
			cout << M[i] << "\n";
		}else{
			for(int j = 1; j < 999990;++j){
				if(primes[M[i] + j]){
					if(primes[M[i] - j]){
						cout << M[i]-j << " " << M[i]+j << "\n";
						break;
					}else{
						cout << M[i]+j << "\n";
						break;
					}
				}else{
					if(primes[M[i] - j]){
						cout << M[i] -j << "\n";
						break;
					}
				}
			}
		}
	}
	
	return 0;
}
