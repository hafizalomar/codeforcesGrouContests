#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    int array[t];

    for (int i = 0; i < t; i++) {
        scanf("%d", &array[i]);
        if (array[i] > 0) {
            array[i] = 1;
        } else if ( array[i] < 0) {
            array[i] = 2;
        }
    }

    for (int i = 0; i < t; i++) {
         printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}