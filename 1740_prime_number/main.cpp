#include <iostream>
using namespace std;

int main(void){
	int N, M;
	bool primes[1000010];// 1,000,000
	cin >> N >> M;
	fill_n(primes, 1000002, true);
	primes[1] = false;
	for(int i=2;i<1000001;++i){
		if(primes[i]){
			for(int j=i;(long long)i*j < 1000000;++j){
				primes[i*j] = false;
			}
		}
	}
	int primesum = 0, first = 0;
	for(int i=N;i<=M;++i){
		if(primes[i]){
			primesum += i;
			first = i;
			break;
		}
	}
	for(int i=N;i<=M;++i){
		if(primes[i]){
			primesum += i;
		}
	}
	if(!primesum){
		cout << "-1\n";
	}else{
		primesum -= first;
		cout << primesum << "\n" << first << "\n";
	}
	return 0;
}
