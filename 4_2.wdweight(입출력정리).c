#include<stdio.h>
#include<string.h>

int main() {
	char word[5100];
	char *add;
	int res = 0;
	
	if (fgets(word, 50, stdin) == NULL) {
		return -1;
	}
	add = strtok(word, " ");
	while (add != NULL) {
		int i = 0;
		int imm = 0;
		while (add[i] != '\0' && add[i] != '\n') {
			if (add[i] >= 'a' && add[i] <= 'z') {
				add[i] -= 32;
			}
			imm += (add[i] - 'A' + 1);
//			printf("%d\n", imm);
			i++;
//			printf("%c\n", add[i]);
		}
//		printf("%d.\n", imm);
		if (imm > res) {
			res = imm;
//		printf("%d\n", res);
		}
		add = strtok(NULL, " ");
	}
	printf("%d", res);
	return 0;
}

// fgets �Լ��� '\n'���� �������� ���� ����
// �׿� �����Ͽ� fputs �Լ��� �ڵ� ������ ���� �ʴ´�.

// scanf�� printf �迭�� ���� �ϳ��� �����Ҷ� ����, �ڵ� ���� ����x ���ϰ迭�� ��������

//gets�� puts�� ���ϰ迭�� �ݴ�� �ڵ������� ���� / �������� �ʴ´�. 
