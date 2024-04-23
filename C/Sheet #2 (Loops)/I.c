#include<stdio.h>

int main()
{
    int n, com = 0, temp;
    scanf("%d", &n);
    temp = n;

    while (n >= 1)
    {
        com *= 10;
        com += n%10;
        n /= 10;
    }

    if (com == temp) {
        printf("%d\nYES\n", temp);
    } else {
        printf("%d\nNO\n", com);
    }

    return 0;
}