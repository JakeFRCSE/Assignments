#include<stdio.h>

int find_max2(int *array, int size) {
	int max = array[0];
	int max2 = array[1];
	int i;
	if (max2 > max) {
		max = array[1];
		max2 = array[0];
	}
	for (i = 2; i < size; i++) {
		if (max < array[i]) {
			max2 = max;
			max = array[i];
		}
		else if (max2 < array[i]) {
			max2 = array[i];
		}
	}
	return max2;
}

int main() {
	int n;
	int i;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
	if (n == 1) {
		printf("%d", a[0]);
		return 0;
	}
	else if(n == 2) {
		printf("%d", (a[0] > a[1]) ? a[1] : a[0]);
		return 0;
	}
	else {
	int size = sizeof(a) / sizeof(a[0]);
	printf("%d", find_max2(a, size));	
	return 0;
	}
}
