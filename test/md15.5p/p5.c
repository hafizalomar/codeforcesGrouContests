#include<stdio.h>

void swap_it (int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    printf("before swap = %d %d\n", a, b);

    swap_it(&a, &b);

    printf("after swap = %d %d\n", a, b);


    return 0;
}