#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int res = 1;

        while (n != 0)
        {   
            if (1 == n%2) {
                res = res + res;
            }
            n = n/2;
        }

        printf("%d\n", res-1);
    }

    return 0;
}