#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
		char a[1000] = { 0 };
	while(scanf("%s", a)!=EOF){
		int b[26] = { 0 };
		int odd = 0;
		int even = 0;
		for (int i = 0; i < strlen(a); i++) {
			int p = a[i];
			if (p >= 65 && p <=90) {
				b[p - 65] += 1;
			}
			if (p >= 97 && p <= 122) {
				b[p - 97] += 1;
			}
		}
		for (int i = 0; i <26; i++) {
			if (b[i] == 0) {
				continue;
			}
			if (b[i] % 2 == 1) {
				odd += 1;
			}
			if (b[i] % 2 == 0&&b[i]!=0) {
				even += 1; 
			}
			if (odd > 1) {
				break;
			}
		}
		if(odd==0&&even==0){
		    puts("yes !");
		}
 		if (odd > 1) {
			puts("no...");
		}
		if (odd==0 && even > 0) {
			puts("yes !");
		}
		if (odd == 1) {
			puts("yes !");
		}
	}
}