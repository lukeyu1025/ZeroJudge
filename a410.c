#include <stdio.h>

int main()
{
	int a[10] = {0};
	for (int i = 1; i <= 6; i++) {
		scanf("%d", &a[i]);
	}
	float x, y;
	int t = a[1] * a[5] - a[2] * a[4];
	int tx = a[3] * a[5] - a[2] * a[6];
	int ty = a[1] * a[6] - a[3] * a[4];
	if (t == 0) {
		if (tx==0 && ty==0) {
			printf("Too many");
		}
		else {
			printf("No answer");
		}
	}
	else {
		x = (float)tx / t;
		y = (float)ty / t;
		printf("x=%.2f\ny=%.2f", x, y);
	}
}