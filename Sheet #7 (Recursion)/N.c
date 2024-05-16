#include<stdio.h>

void fun(int a[1000][1000], int b[][], int n, int m, int i,  int j) {
    if (i == n) return;
    if (j == m) {
        printf("\n");
        i++;
        j = 0;
    }
    printf("%d ", a[i][j]+b[i][j]);
    fun(a, b, n, m, i, j+1);
}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int A[row][col];
    int B[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    fun(A, B, row, col, 0, 0);

    return 0;
}