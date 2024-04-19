#include<stdio.h>

int main()
{
    int n, com = 0;
    scanf("%d", &n);

    while (n >= 10)
    {
        com = n/10;
        break;
    }

    printf("%d", com);
    

    return 0;
}