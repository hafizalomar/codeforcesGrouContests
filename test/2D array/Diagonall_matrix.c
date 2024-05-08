#include<stdio.h>

#include<stdio.h>

int main()
{
    int row, col;
    printf("first enter row and second column: ");
    scanf("%d %d", &row, &col);

    int array[row][col];

    if (row != col) {
        return 0;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int count = 0;
    int cellWithZero = row*col-row;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (array[i][j] == 0) {
                if (i != j) {
                    if (array [i][j] == 0) {
                        count++;
                    }
                }
            }
        }
    }

    if (count == cellWithZero) {
        printf("Diagonal matrix.");
    } else {
        printf("NO.");
    }


    return 0;
}