#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node{
	char *str;
	struct _node *next;
} node;

void add_node(node *now){
	now -> next = (node*)malloc(sizeof(node));
	now -> next -> str = (char*)NULL;
	now -> next -> next = (node*)NULL;
	return;
}

int find(node *k, char *str){
	if(!k){
		return 0;
	}else if(!strcmp(k -> str, str)){
		return 1 + find(k -> next, str);
	}else{
		return 0 + find(k -> next, str);
	}
}

int main(void){
	node *k = (node*)malloc(sizeof(node));
	node *curr = k;
	//初めのケース
	char first_str[100];
	scanf("%s", first_str);
	int len = (int)strlen(first_str);
	k -> str = (char*)malloc(sizeof(char) * (len + 10));
	strcpy(curr -> str, first_str);
	add_node(k);
	curr = k -> next;
	
	while(1){
		char str[100];
		scanf("%s", str);
		if(!strcmp(str, "END")){
			break;
		}
		int len = (int)strlen(str);
		
		if(find(k, str)){
			continue;
		}
		//curr -> str 집어넣기
		curr -> str = (char*)malloc(sizeof(char) * (len + 10));
		strcpy(curr -> str, str);
		//curr 교환
		add_node(curr);
		curr = curr -> next;
	}
	
	curr = k;
	while(curr){
		printf("%d", k -> str
		curr = curr -> next;
	}

	return 0;
}
