#include <iostream>
using namespace std;

int loop(int k){
	if(k == 1){
		return 0;
	}
	if(k%2){
		k /= 3;
	}else{
		k /= 2;
	}
	return 1 + loop(k);
}

int main(void){
	int k;
	cin >> k;
	cout << loop(k) << endl;
	return 0;
}
