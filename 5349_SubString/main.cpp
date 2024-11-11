#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main(void) {
	string lineinstr;
	getline(cin, lineinstr);
	char *line = (char*)lineinstr.c_str();
	int count = 0;
	stack<char*> strs;
	char *word = strtok(line, " ");//첫번째 strtok 사용.
	while(word != NULL){//ptr이 NULL일때까지 (= strtok 함수가 NULL을 반환할때까지)
		//if(count % 2){
		if(1){
		    strs.push(word);
		}
		word = strtok(NULL, " ");//자른 문자 다음부터 구분자 또 찾기
	}
    int s = strs.size();
	while(!strs.empty()){
        if(!(s % 2)) {
            cout << strs.top() << " ";
        }
        strs.pop();
        --s;
	}
    return 0;
}

