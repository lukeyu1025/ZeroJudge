#include <stdio.h>
int main()
{
    int num = 0;
    char a[50] = { 0 };
    int three = 0;
    int four = 0;
    int five = 0;
    scanf("%d", &num);
    for (int i = 0; i <= (num - 1); i++) {
        scanf("%s", &a[i]);
    }
    for (int p = 0; p <= (num - 1); p++) {
        int k = a[p] - 48;
        if (k < 3)
            k += 3;
        if ((k % 3) == 0) {
            three += 1;
        }
        if ((k % 4) == 0) {
            four += 1;
        }
        if ((k % 5) == 0) {
            five += 1;
        }
    }
    printf("%d %d %d", three, four, five);
}