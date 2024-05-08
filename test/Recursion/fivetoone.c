#include<stdio.h>

void fun(int i) {
    if (i == 0) return 0;
    printf("%d ", i);
    fun(i-1);
}


int main()
{
    fun(5);

    printf("\n");
    return 0;
}