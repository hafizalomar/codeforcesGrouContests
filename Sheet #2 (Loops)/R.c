#include<stdio.h>

int main() 
{
    int a, b;
    while (1)
    {
        int sum = 0;
        scanf("%d %d", &a, &b);
        if (a > 0 && b > 0) {
            if (a < b) {
                for (int i = a; i <= b; i++) {
                    sum += i;
                    printf("%d ", i);
                }
                printf("sum =%d", sum);
            } else {
                for (int i = b; i <= a; i++) {
                    sum += i;
                    printf("%d ", i);
                }
                printf("sum =%d", sum);
            }
        } else {
            break;
        }
        printf("\n");
    }

    return 0;
}