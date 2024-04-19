#include<stdio.h>

int main()
{

    long long int a, b;
    scanf("%lld %lld", &a, &b);

    if ((a-b == 1 || b-a == 1) || (a == b && a != 0 && b != 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}