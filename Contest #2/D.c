#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int l, r;
        scanf("%d %d", &l, &r);

        long long int sum = 0;

        for (int i = l; i <=r; i++) {
            sum += i;
        }
        printf("%d\n", sum);
    }
}