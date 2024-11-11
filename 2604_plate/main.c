#include <stdio.h>
#include <string.h>

int main(void){
	char str[60];
	int h = 10;
	scanf("%s", str);
	int len = strlen(str);
	for(int i=1;i < len;++i){
		if(str[i] == str[i-1]){
			h += 5;
		}else{
			h += 10;
		}
	}
	printf("%d", h);
	return 0;
}
