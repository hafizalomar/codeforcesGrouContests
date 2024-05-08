#include<stdio.h>

int main()
{

    int x = 5;

    int *ptr = &x;

    printf("value of x : %d\n", x);

    printf("value of y : %d\n", *ptr);

    printf("size of ptr: %ld\n", sizeof(ptr));


    return 0;
}