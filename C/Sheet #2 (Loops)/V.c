#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int step = 1;
    for (int i = 0; i < t; i++) {
        printf("%d %d %d PUM\n", step, step+1, step+2);
        step += 4;
    }
    
    return 0;
}