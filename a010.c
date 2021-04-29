#include<stdio.h>
int main() {
	int input = 0;
	int count = 0;
	scanf("%d", &input);
	for (int i = 2; i <=input; i++) {
		if (count!=0) {
			printf(" * ");
		}
		count = 0;
		while (input % i == 0) {
			input /= i;
			count += 1;	
		}
		if (count > 1) {
			printf("%d^%d",i,count);
		}
		else if (count==1) {
			printf("%d",i);
		}	
	}
}