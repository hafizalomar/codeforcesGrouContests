#include<stdio.h>

long long int fun(long long int n) {
    if (n == 0) return 1;
    return n * fun(n-1);
}
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int result = fun(n);
    printf("%lld\n", result);
}