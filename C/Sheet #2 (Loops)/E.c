#include<stdio.h>
#include<limits.h>

int main()
{
    int t, n;
    int max = INT_MIN;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n >= max) {
            max = n;
        }
    }

    printf("%d", max);

    return 0;
}
