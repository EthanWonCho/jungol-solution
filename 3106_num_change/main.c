#include <stdio.h>
typedef struct _node{
	_node *deep;
	char val;
} node;
char *ptr;

int int_pow(int a, int b){
	if(b == 0) return 1;
	else return a * int_pow(a, b-1);
}

int dec_tion(char c){
	if('0' <= c && c <= '9'){
		return (int)c - '0';
	}else{
		return (int)c - 'A' + 10;
	}
}

char char_tion(int d){
	if(d < 10){
		return (char)d + '0';
	}else{
		return (char)d - 10 + 'A';
	}
}

void add_cipher(int a){
	if(!ptr){
		ptr = malloc(sizeof(node));
		ptr -> deep = NULL;
		ptr -> val = char_tion(a);
	}else{
		node *new = malloc(sizeof(node));
		node -> deep = ptr;
		node -> val = char_tion(a);
		ptr = node;
	}
}

int A_decimal(int A, char *S, int len){
	int rst = 0;
	for(int i=0;i<len;++i){//'i' is exponent
		char c = S[len-i-1];
		int k = dec_tion(c);
		rst += k * int_pow(A, i);
	}
	return rst;
}

void decimal_B(int B, int dec){
	while(1){
		int atarashi = dec % B;
		if(atarashi)
			add_cipher(atarashi);
		else break;
		dec /= B;
	}
}

int main(void){
	return 0;
}
