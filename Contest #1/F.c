#include<stdio.h>

int main()
{
    int a, b, bitSum;

    scanf("%d %d", &a, &b);

    bitSum = a ^ b;

    printf("%d\n", bitSum);

}