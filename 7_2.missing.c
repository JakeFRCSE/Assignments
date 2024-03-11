#include<stdio.h>

int compare(int i, int *array, int size) {
	int j;
	for (j = 0; j < size; j++) {
		if (i == array[j]) {
			return 1;
		}
	}
	return 0;
}

int check (int *array, int size) {
	int i;
	int ver;
	for (i = 0; i < size; i++) {
		ver = compare(i + 1, array, size);
		if (ver == 0) {
			return i + 1;
		}
	}
	return size + 1;
}



int main() {
	int a[100];
	int i = 0;
	while (scanf("%d", &a[i]) == 1) {
		i++;
	}
	printf("%d", check(a, i));
	return 0;
}
