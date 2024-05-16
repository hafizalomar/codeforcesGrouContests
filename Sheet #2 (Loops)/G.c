#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        long long int temp = 1;
        for (int j = 1; j <= n; j++) {
            temp *= j;
        }

        printf("%lld\n", temp);
    }
}