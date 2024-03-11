#include<stdio.h>
#include<ctype.h>
#include<string.h>

int find (char *array, int size) {
	int u = 1;
	char c;
	while (c = *array++) {
		if (isalpha(c)) {
			if (isupper(c)) {
				return u;
			}
		}
		u++;
	}
}

int isvowel(char c) {
	if (isalpha(c)) {
		switch (c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return 1;
				break;
		}
	}
	return 0;
}

int isconsonant (char c) {
	if (isalpha(c)) {
		switch (c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return 0;
				break;
		}
		return 1;
	}
}

int main() {
	char s[98];
	fgets(s, 98, stdin);
	int size = strlen(s);
	int pos = find(s, size);
	int x = 0, y = 0, i;
	for (i = 0; i < pos - 1; i++) {
		if (s[i+1] != ' ') {
			y += isconsonant(s[i]);
			x += isvowel(s[i]);
		}
	}
	printf("%d %d", x, y);
	return 0;
}
