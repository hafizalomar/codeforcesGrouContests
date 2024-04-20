#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    int array[t];

    for (int i = 0; i < t; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < t; i++) {
        if (array[i] <= 10 && array[i] >= 0) {
            printf("A[%d] = %d\n", i, array[i]);
        }
    }
    printf("\n");

    return 0;
}