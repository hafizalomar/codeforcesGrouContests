#include<stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int space = 0; space < n-i; space++) {
            printf(" ");
        }

        for (int chart = i; chart > 0; chart--) {
            printf("%d", chart);
        }

        printf("\n");
    }



    return 0;
}