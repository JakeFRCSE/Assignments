#include<stdio.h>
#include<math.h>

int main() {
	int c = getchar(), d = getchar(), r, res = 0, i;
	r = (c - '0') * 10 + (d - '0');
	int bit = r&85;
//	printf("%d\n", bit);
	for (i = 0; i < 4; i++) {
//		printf("%f\n", pow(2, 6 - (2 * i)));
//		printf("cal : %f\n", (bit / pow(2, 6 - (2 * i))));
		if (bit / pow(2, 6 - (2 * i)) >= 1) {
			bit -= pow(2, 6 - (2 * i));
			res += pow(2, 3 - i);
		}
	}
	printf("%d", res);
	return 0;
}
