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

// fgets 함수는 '\n'까지 저장함을 잊지 말자
// 그와 관련하여 fputs 함수는 자동 개행이 되지 않는다.

// scanf와 printf 계열은 변수 하나씩 저장할때 유용, 자동 개행 지원x 파일계열도 마찬가지

//gets와 puts는 파일계열과 반대로 자동개행을 지원 / 지원하지 않는다. 
