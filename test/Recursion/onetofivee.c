#include<stdio.h>

void fun(int i) {
    if (i == 6) return 0;
    fun(i+1);
    printf("%d ", i);
    
}

int main()
{
    fun(1);

    printf("\n");
    return 0;
}