#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        int ans = 1;
        char a[1000] = { 0 };
        scanf("%s", &a);
        for (int p = 0; p < strlen(a); p++) {
            ans *= a[p]-48;
        }
        printf("%d\n", ans);
    }
}
