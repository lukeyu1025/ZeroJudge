#include <stdio.h>

int main()
{
    int start = 0;
    int end = 0;
    while (scanf("%d", &start) != EOF) {
        scanf("%d", &end);
        int sum = 0;
        int count = 0;
        for (int i = start; sum <= end; i++) {
            sum += i;
            count += 1;
        }
        if (count == 0) {
            count+=1;
        }
        printf("%d\n", count);
    }
    
}
