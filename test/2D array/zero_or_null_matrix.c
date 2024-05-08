#include<stdio.h>

int main()
{
    int row, col;
    printf("first enter row and second column: ");
    scanf("%d %d", &row, &col);
    int array[row][col];
    int cell = row * col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i][j] == 0) {
                count++;
            }
        }
    }

    if (count == cell) {
        printf("null matrix.");
    } else {
        printf("not null matrix.");
    }




    return 0;
}