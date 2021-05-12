#include <stdio.h>

int main()
{
    int pw[10] = { 0 };
    int try = 0;
    int temp[10] = { 0 };
    while (scanf("%d%d%d%d", &pw[0], &pw[1], &pw[2], &pw[3]) != EOF) {
        scanf("%d", &try);
        for (int i = 0; i < 4; i++)
        {
            temp[i] = pw[i];
        }
        for (int i = 1; i <= try; i++) {
            int alpha = 0;
            int beta = 0;
            int a[10] = { 0 };
            for (int q = 0; q <= 3; q++) {
                scanf("%d", &a[q]);
            }
            for (int i = 0; i <= 3; i++) {
                if (a[i] == pw[i]) {
                    alpha++;
                    a[i] = -1;
                    pw[i] = -1;
                }
            }
            for (int i = 0; i <= 3; i++) {
                for (int p = 0; p <= 3; p++) {
                    if (a[p] == pw[i]) {
                        beta++;
                        a[p] = -1;
                        pw[i] = -1;
                        break;
                    }
                }
            }
            printf("%dA%dB\n", alpha, beta-alpha);
            for (int i = 0; i < 4; i++)
            {
                pw[i] = temp[i];
            }
        }

    }
    return 0;
}