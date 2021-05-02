#include<stdio.h>
int main() {
	
	int num = 0;
	while (scanf("%d", &num) != EOF) {
		unsigned long long f = 1;
		unsigned long long g = 1;
		for (int i = 2; i <= num; i++) {
			f = i + f;
			g = f + g;
		}
		printf("%llu %llu\n", f, g);
	}
		
}