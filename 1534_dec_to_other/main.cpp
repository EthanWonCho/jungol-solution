#include <iostream>
using namespace std;
//Goal: Get dec-num, Give bin, oct, hex-num
void bin(int dec){
	string bin;
	while(dec != 0){
		if(dec % 2){
			bin.insert(0, "1");
			dec /= 2;
		}else{
			bin.insert(0, "0");
			dec /= 2;
		}
	}
	cout << bin;
}
void oct(int dec){
	string oct;
	while(dec != 0){
		char an_oct[5];
		snprintf(an_oct, 10, "%d", dec%8);
		oct.insert(0, an_oct);
		dec /= 8;
	}
	cout << oct;
}
void hex(int dec){
	string hex;
	while(dec != 0){
		if(dec%16 < 10){
			char an_hex[5];
			snprintf(an_hex, 10, "%d", dec%16);
			hex.insert(0, an_hex);
			dec /= 16;
		}else{
			switch(dec%16){
			case 10:
				hex.insert(0, "A");
				break;
			case 11:
				hex.insert(0, "B");
				break;
			case 12:
				hex.insert(0, "C");
				break;
			case 13:
				hex.insert(0, "D");
				break;
			case 14:
				hex.insert(0, "E");
				break;
			case 15:
				hex.insert(0, "F");
				break;
			}
			dec /= 16;
		}
	}
	cout << hex;
}

int main(void){
	int dec, goal;
	cin >> dec >> goal;
	switch(goal){
	case 2:
		bin(dec);
		break;
	case 8:
		oct(dec);
		break;
	case 16:
		hex(dec);
		break;
	default:
		return 0;
	}
	return 0;
}