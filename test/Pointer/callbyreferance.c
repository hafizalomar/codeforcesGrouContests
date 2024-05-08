#include<stdio.h>

void fun(int *p) {
    *p = 140;
}

int main()
{
    int x = 100;

    fun(&x);

    printf("%d\n", x);




    return 0;
}