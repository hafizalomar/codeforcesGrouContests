#include<stdio.h>

int  main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    int array[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int n;
    scanf("%d", &n);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (n == array[i][j]) {
                printf("will not take number\n");
                return 0;
            }
        }
    }

    printf("will take number\n");
    
}