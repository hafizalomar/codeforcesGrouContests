#include<stdio.h>

int main()
{
    int x, p;
 
    scanf("%d %d", &x, &p);
 
    double originalRate = ((double)p * 100) / (100 - x);
 
    printf("%.2lf\n", originalRate);
 
    return 0;
}