#include <stdio.h>
#include <string.h>

int main(void){
	char str[10010];
	scanf("%s", str);
	int len = strlen(str);
	int koi = 0, ioi = 0;
	for(int i=0;i<len-2;++i){
		if(str[i] == 'K' && str[i+1] == 'O' && str[i+2] == 'I') ++koi;
		else if(str[i] == 'I' && str[i+1] == 'O' && str[i+2] == 'I') ++ioi;
	}
	printf("%d\n%d\n", koi, ioi);
	return 0;
}
