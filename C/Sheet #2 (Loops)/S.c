#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = 0;

        if (a > b) {
            
            for (int j = b+1; j < a; j++) {
                if (j%2 != 0) {
                    sum += j;
                }
            }
        } else {
            for (int j = a+1; j < b; j++) {
                if (j%2 != 0) {
                    sum += j;
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}