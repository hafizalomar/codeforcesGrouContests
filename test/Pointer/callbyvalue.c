#include<stdio.h>

void fun(int x);

int main()
{
    int x = 10;

    printf("address of main x: %p\n", &x);

    fun(x);



    return 0;
}

void fun(int x) {
    printf("address of fun x: %p\n", &x);
}