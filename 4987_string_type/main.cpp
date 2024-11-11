#include <iostream>
#include <string>
using namespace std;

int main(void){
	string str, F;
	cin >> str >> F;

	// 문자열 A의 길이 구하기
	int strlen = str.length();
	int Flen = F.length();

	int idx = 0;
	// 문자열 A에서 문자열 "coding"이 있는 인덱스 찾기
	while(1){
		idx = str.find(F);
		if(idx != -1){//string::npos is -1
			str.erase(idx, Flen);
		}else{
			break;
		}
	}

	cout << str << endl;
    return 0;
}
