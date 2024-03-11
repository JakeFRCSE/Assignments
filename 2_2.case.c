#include<stdio.h>

int main() {
	char c;
	scanf("%c",&c);
	
	if (c >= 'a' && c <= 'z') {
		if (c == 'a') {
			printf("z");
		}
		else {
			printf("%c", c - 1);
		}
	}
	
	if (c >= 'A' && c <= 'Z') {
		if (c == 'Z') {
			printf("A");
		}
		else {
			printf("%c", c + 1);
		}
	}
	return 0;
}
