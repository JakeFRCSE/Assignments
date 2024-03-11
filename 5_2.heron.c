#include<stdio.h>
#include<math.h>
#include<string.h>

double heron(double, double, double); 
double dis(double, double, double, double);

int main() {
	double a_x = 0.0, a_y = 0.0, b_x = 0.0, b_y = 0.0, c_x = 0.0, c_y = 0.0, res;
	char word1[41], word2[41], word3[41];
	int i;
	// 선언부 
	
	scanf("%s%s%s", word1, word2, word3);
	// 입력
	
	for (i = 0; i < strlen(word1); i++) {
		if ((word1[i] >= 'a' && word1[i] <= 'z') || (word1[i] >= 'A' && word1[i] <='Z')){
			if (word1[i] == 'a' || word1[i] == 'e' || word1[i] == 'i' || word1[i] == 'o' || word1[i] == 'u' || word1[i] == 'A' || word1[i] == 'I' || word1[i] == 'O' || word1[i] == 'U' || word1[i] == 'E') {
				a_x++;
			}
			else {
				a_y++;
			}
		}
	} 

	for (i = 0; i < strlen(word2); i++) {
		if ((word2[i] >= 'a' && word2[i] <= 'z') || (word2[i] >= 'A' && word2[i] <='Z')){
			if (word2[i] == 'a' || word2[i] == 'e' || word2[i] == 'i' || word2[i] == 'o' || word2[i] == 'u' || word2[i] == 'A' || word2[i] == 'I' || word2[i] == 'O' || word2[i] == 'U' || word2[i] == 'E') {
				b_x++;
			}
			else {
				b_y++;
			}
		}
	}
	
	for (i = 0; i < strlen(word3); i++) {
		if ((word3[i] >= 'a' && word3[i] <= 'z') || (word3[i] >= 'A' && word3[i] <='Z')){
			if (word3[i] == 'a' || word3[i] == 'e' || word3[i] == 'i' || word3[i] == 'o' || word3[i] == 'u' || word3[i] == 'A' || word3[i] == 'I' || word3[i] == 'O' || word3[i] == 'U' || word3[i] == 'E') {
				c_x++;
			}
			else {
				c_y++;
			}
		}
	}
	//좌표 설정 완료 
	
	double ab = dis(a_x, a_y, b_x, b_y);
	double bc = dis(b_x, b_y, c_x, c_y);
	double ca = dis(c_x, c_y, a_x, a_y);
	res = heron(ab, bc, ca);
	printf("%.3f", round(res*1000) / 1000);
	// 각종 계산 후 출력 
}

double heron(double a, double b, double c) {
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}


double dis(double x1, double y1, double x2, double y2) {
	double x_dis = x1 - x2;
	double y_dis = y1 - y2;
	double disq = x_dis*x_dis + y_dis*y_dis;
	double distance = sqrt(disq);
	return distance;
}
