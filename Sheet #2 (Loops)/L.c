#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        for (int i = b; i > 0; i--) {
            if (b%i==0) {
                if (a%i == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    } else {
        for (int i = a; i > 0; i--) {
            if (a%i == 0) {
                if (b%i == 0) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}