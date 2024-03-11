#include<stdio.h>
#include<stdlib.h>

typedef struct {
	enum {number, character
	     } tag;
	union {
		int num;
		char alph;
	};
} CHECK;

int *square_num(int);
char *square_char(char);

int main() {
	int n = 3;
//	scanf("%d", &n);
//	getchar();
	int i, temp_num;
	char temp;
	CHECK check[] = {{number, .num = -3}, {character, .alph = 'A'}, {number, .num = 5}};
	for (i = 0; i < n; i++) {
//		scanf("%c", &temp);
		if (temp == '+' || temp == '-') {
//			scanf("%d", &temp_num);
//			getchar();
			check[i].tag = number;
			check[i].num = temp_num;
		} else if (temp >= '0' && temp <= '9') {
			temp_num -= '0';
			check[i].tag = number;
			check[i].num = temp_num;
		} else {
			check[i].tag = character;
			check[i].alph = temp;
		}
	}
	void *ptr[n];
	for (i = 0; i < n; i++) {
		if (check[i].tag == number) {
			ptr[i] = (void*)square_num(check[i].num);
		}
		else if (check[i].tag == character) {
			ptr[i] = (void*)square_char(check[i].alph);
		}
	}
	for (i = n - 1; i >= 0; i--) {
		if (check[i].tag == number) {
			printf("%d", *(int *)ptr[i]);
		}
		else if (check[i].tag == character) {
			printf("%s", *(char *)ptr[i]);
		}
	}
	return 0;
}

int *square_num(int n) {
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = n * n;
	return p;
}

char *square_char(char c) {
	char *p = (char*)malloc(sizeof(char) * 3);
	p[0] = c;
	p[1] = c;
	p[2] = '\0';
	return p;
}
