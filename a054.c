#include<stdio.h>
int main()
{
    int sum = 0;
    int check = 0;
    char x[10] = {0};
    gets(x);
    sum += x[8]-48;
    for (int i = 7; i >= 0; i--) {
        sum += (x[i]-48) * (8 - i);
    }
    check = sum % 10;
    if ((1 + 0 * 9+check) % 10 == 0)
        printf("A");
    if ((1 + 1 * 9+check) % 10 == 0)
        printf("B");
    if ((1 + 2 * 9+check) % 10 == 0)
        printf("C");
    if ((1 + 3 * 9+check) % 10 == 0)
        printf("D");
    if ((1 + 4 * 9+check) % 10 == 0)
        printf("E");
    if ((1 + 5 * 9+check) % 10 == 0)
        printf("F");
    if ((1 + 6 * 9+check) % 10 == 0)
        printf("G");
    if ((1 + 7 * 9+check) % 10 == 0)
        printf("H");
    if ((3 + 4 * 9+check) % 10 == 0)
        printf("I");
    if ((1 + 8 * 9+check) % 10 == 0)
        printf("J");
    if ((1 + 9 * 9+check) % 10 == 0)
        printf("K");
    if ((2 + 0 * 9+check) % 10 == 0)
        printf("L");
    if ((2 + 1 * 9+check) % 10 == 0)
        printf("M");
    if ((2 + 2 * 9+check) % 10 == 0)
        printf("N");
    if ((3 + 5 * 9+check) % 10 == 0)
        printf("O");
    if ((2 + 3 * 9+check) % 10 == 0)
        printf("P");
    if ((2 + 4 * 9+check) % 10 == 0)
        printf("Q");
    if ((2 + 5 * 9+check) % 10 == 0)
        printf("R");
    if ((2 + 6 * 9+check) % 10 == 0)
        printf("S");
    if ((2 + 7 * 9+check) % 10 == 0)
        printf("T");
    if ((2 + 8 * 9+check) % 10 == 0)
        printf("U");
    if ((2 + 9 * 9+check) % 10 == 0)
        printf("V");
    if ((3 + 2 * 9+check) % 10 == 0)
        printf("W");
    if ((3 + 0 * 9+check) % 10 == 0)
        printf("X");
    if ((3 + 1 * 9+check) % 10 == 0)
        printf("Y");
    if ((3 + 3 * 9+check) % 10 == 0)
        printf("Z");
}