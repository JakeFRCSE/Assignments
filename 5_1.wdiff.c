#include<stdio.h>
#include<math.h>

int main() {
	char word1[41], word2[41];
	int x = 0, y = 0, count1 = 0, count2 = 0, i, z;
	double res;
	
	scanf("%s", word1);
	scanf("%s", word2);
	
	for (i = 0; i < 41; i++) {
		if (word1[i] == '\0') {
			break;
		}
		count1++;
	}
	for (i = 0; i < 41; i++) {
		if (word2[i] == '\0') {
			break;
		}
		count2++;
	}
	
	for (i = 0; i < count1; i++) {
		char a = word1[i];
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
			x++;
		}
		else {
			y++;
		}
	}
	for (i = 0; i < count2; i++) {
		char b = word2[i];
		if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U') {
			x--;
		}
		else {
			y--;
		}
	}
	z = x*x + y*y;
	res = sqrt(z);
	printf("%.3f", round(res*1000) / 1000);
}
