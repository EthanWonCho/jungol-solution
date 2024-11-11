#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void){
	string bin;
	int dec = 0;
	cin >> bin;
	int len = bin.length();
	for(int i=0;i<len;++i){
		if(bin[i] == '1'){
			dec += pow(2,(len-i-1));
		}
	}
	cout << dec;
	return 0;
}