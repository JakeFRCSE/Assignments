#include<stdio.h>

int type1(int num1, int num2);
int type0(int num1, int num2);

int main() {
	int (*sums[2])() = {type0, type1};
	int prev, currnt, res = 0;
	int nums[1000];
	int i = 0;
	while (scanf("%d", &nums[i]) == 1) {
		res = sums[nums[0] % 2](res, nums[i++]);
	}
	printf("%d",res);
}

int type0(int num1, int num2) {
	return num1 ^ num2;
}

int type1(int num1, int num2) {
	return num1 + num2;
}
