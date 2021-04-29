#include <stdio.h>
#include <string.h>
int main()
{
    char a[999];
    int k = 7;
    int i = 0;
    while (scanf("%s", &a) != EOF) {
        while (a[i]) {
            printf("%c", a[i] - k);
            i++;
        }
        printf("\n");
    }
    return 0;
}