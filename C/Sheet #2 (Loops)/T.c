#include<stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    
    int step = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = n-i; j > 0; j--) {
            printf(" ");
        }
        for (int z = 0; z < step; z++) {
            printf("*");
        }
        step += 2;
        printf("\n");
    }

    return 0;
}