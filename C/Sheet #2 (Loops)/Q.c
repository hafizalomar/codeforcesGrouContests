#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        if (n == 0) {
            printf("0");
        } else {
            while (n >= 1) {
            int ans = n%10;
            printf("%d ", ans);
            n /= 10; 
            }
        }
        printf("\n");
    }

    return 0;
}