#include<stdio.h>

int main() {
	int n, i = 0, j;
	double h[100], res = 0.0;
	char c;
	
	fscanf(stdin, "%d", &n);
	n *= 3.3058;
	
	while (fscanf(stdin, "%lf", &h[i++]) != EOF) {
		c = getchar();
		if (c == '\n') {
			break;
		}
	}
	
	for ( j = 0; j < i; j++) {
		if (h[j] <= n && h[j] > res) {
			res = h[j];
			printf("%lf", res);
		}
	}
	printf("%.2lf\n%.2lf",res / 3.3058 , res);
}
