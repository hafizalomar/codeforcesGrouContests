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

    int comValue;
    scanf("%d", &comValue);

    for (int i = 0; i < t; i++) {
        if (array[i] == comValue) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}