#include <stdio.h>
#include <string.h>

char str[15][110];
int idx;

int find(char* tok){
	for(int i=0;i<idx;++i){
		if(!strcmp(str[i], tok)){
			return 1;
		}
	}
	return 0;
}

int main(void){
	//I am a bad liar
	idx = 0;
	while(1){
		char str_[110];
		fgets(str_, 105, stdin);
		strtok(str_, "\r\n");
		if(!strcmp(str_, "END")){
			return 0;
		}
		char *tok = strtok(str_, " ");
		while(tok != NULL){//ptr이 NULL일때까지 (= strtok 함수가 NULL을 반환할때까지)
			if(!find(tok)){//ない
				strcpy(str[idx++], tok);
			}
			tok = strtok(NULL, " ");//자른 문자 다음부터 구분자 또 찾기
		}

		for(int i=0;i<idx;++i){
			printf("%s ", str[i]);
		}printf("\n");
	}
}
