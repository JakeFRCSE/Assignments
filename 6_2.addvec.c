#include<stdio.h>
#include<math.h>

int main() {
	typedef struct{
		double x, y;
	} vector;
	vector v1, v2, res;
	scanf("%lf%lf", &v1.x, &v1.y);
	scanf("%lf%lf", &v2.x, &v2.y);
	res.x = v1.x + v2.x;
	res.y = v1.y + v2.y;
	double ra = atan(res.y / res.x);
	ra = ra / acos(-1);
	ra = ra * 180;
	if (res.x == 0 && res.y == 0) {
		printf("0.00");
	}
	else {
		printf("%.3f", ra);
	}
}
