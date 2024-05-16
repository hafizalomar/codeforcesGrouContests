#include<stdio.h>
#include<limits.h>

int main()
{
    double a, n, k;

    scanf("%lf %lf %lf", &n, &k, &a);

    double tempDouble = (n*k)/a;
    long long tempInt = tempDouble;

    double temp = tempDouble - tempInt;

    if (temp > 0) {
        printf("double\n");
    } else if (tempInt <= INT_MAX) {
        printf("int\n");
    } else {
        printf("long long\n");
    }

    return 0;
}