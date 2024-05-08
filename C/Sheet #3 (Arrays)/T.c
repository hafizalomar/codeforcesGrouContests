#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];

    int main_diagonal = 0;
    int secondary_diagonal = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                main_diagonal += ar[i][j];
            }
            if (i+j == n-1) {
                secondary_diagonal += ar[i][j];
            }
        }
    }

    int absolute_difference = abs(main_diagonal - secondary_diagonal);

    printf("%d\n", absolute_difference);

    return 0;
}