#include<stdio.h>

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);

    long long int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += a%10;
        a /= 10;
    }

    printf("%lld\n", sum);



    return 0;
}