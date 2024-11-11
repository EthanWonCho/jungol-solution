#include <stdio.h>
#include <string.h>

void put_char(char* str, char c){
	int len = strlen(str);
	str[len] = c;
	return;
}

int main(void){
	char str[5][20];
	char rst[130];

	/*init start*/
	for(int i=0;i<5;++i){
		for(int j=0;j<20;++j){
			str[i][j] = 0x00;
		}
	}
	for(int i=0;i<130;++i)
		rst[i] = 0x00;
	/*init end*/
	int maxlen = 0;
	for(int i=0;i<5;++i){
		scanf("%s", str[i]);
		int len = strlen(str[i]);
		if(maxlen < len) maxlen = len;
	}
	for(int i=0;i<maxlen;++i){
		for(int j=0;j<5;++j){
			if(str[j][i])
			put_char(rst, str[j][i]);
		}
	}
	printf("%s\n", rst);
	return 0;
}
