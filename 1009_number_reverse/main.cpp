#include <iostream>
using namespace std;
int sum, ksum;
void p_1st(int k){
	if(k == 0) return;
	else{
	int j = k % 10;
	sum *= 10;
	sum += j;
	ksum += j;
	p_1st(k/10);
	}
}

int main(void){
	for(int a=0;a<10;++a){
		int input;
		cin >> input;
		if(input == 0)return 0;
		p_1st(input);
		cout << sum << " " << ksum<<endl;
		sum = 0;
		ksum = 0;
	}
	return 0;
}
