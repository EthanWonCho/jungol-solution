#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char key[30];
	char crypt[90] = {0};
	scanf("%s ", key);
	fgets(crypt, 85, stdin);

	//前から交換する
	int len = (int)strlen(crypt);
	for(int i=0;i<len-1;++i){
		//crypt[i]
		if(crypt[i] == ' '){
			continue;
		}else if(islower(crypt[i])){
			crypt[i] = key[crypt[i]-'a'];
		}else if(isupper(crypt[i])){
			crypt[i] = key[crypt[i]-'A'] - 0x20;
		}else{
			return 1;
		}
	}

	printf("%s", crypt);
	return 0;
}
