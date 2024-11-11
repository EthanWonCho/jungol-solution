#include <iostream>
using namespace std;

int main(void){
	int N, M;
	bool primes[3000200];// 1,000,000
	cin >> N >> M;
	fill_n(primes, 3000002, true);
	primes[1] = false;
	for(int i=2;i<M + 100;++i){
		if(primes[i]){
			for(int j=i;(long long)i*j < M + 100;++j){
				primes[i*j] = false;
			}
		}
	}
	int primesum = 0;
	for(int i=N;i<=M;++i){
		if(primes[i]){
			++primesum;
		}
	}
	cout << primesum << "\n";
	return 0;
}
