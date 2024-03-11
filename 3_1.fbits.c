#include<stdio.h>

int main() {
	int n, i;
	double f;
	scanf("%d", &n);
	scanf("%lf", &f);
	printf("0.");
	for (i = 0; i < n; i++) {
		if ((f*2) >= 1) {
			f = (f * 2) - 1;
			printf("1");
		}
		else {
			f *= 2;
			printf("0");
		}
	}
}
