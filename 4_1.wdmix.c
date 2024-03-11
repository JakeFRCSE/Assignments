#include<stdio.h>
#include<string.h>

int main() {
	char word1[41], word2[41];
	char *add1, *add2;
	int i = 0, count1 = 0 , count2 = 0;
	
	gets(word1);
	add1 = strtok(word1, " ");
	add2 = strtok(NULL, " ");
	
	while (add1[i++] != '\0') {
		count1++;
	}
	i = 0;
	while (add2[i++] != '\0') {
		count2++;
	}
	
	if (count1 == count2 || count1 == count2 + 1) {
		i = 0;
		while (add1[i] != '\0') {
			printf("%c", add1[i]);
			if (add2[i] != '\0') {
				printf("%c", add2[i]);
			}
			i++;
		}
	}
	else {
		printf("-");
	}
}
