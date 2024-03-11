#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	
	if (n > 0) {
		printf("%+d", n + 1);
	}
	else if (n < 0) {
		printf("%+d", n - 1);
	}
	else {
		printf("%+d", n);
	}
}
