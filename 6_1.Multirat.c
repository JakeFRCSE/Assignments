#include<stdio.h>

int gcd(int a, int b) {
	if (a > b) 
		return gcd(a - b, b);
	else if (a < b) 
		return gcd(b, a);
	else if (a == b)
		return a;
}

int main() {
	int gcd_num;
	typedef struct {
		int a, b;
	} num;
	num num1, num2, res;
	scanf("%d%d", &num1.a, &num1.b);
	scanf("%d%d", &num2.a, &num2.b);
	res.a = num1.a * num2.a;
	res.b = num1.b * num2.b;
	gcd_num = gcd(res.a, res.b);
	res.a = res.a / gcd_num;
	res.b = res.b / gcd_num;
	printf("%d/%d", res.a, res.b);
}
