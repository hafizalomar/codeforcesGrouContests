#include<stdio.h>
 
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    
    if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            max = c;
        } else {
            max = b;
        }    
    } else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            max = c;
        } else {
            max = a;
        } 
    } else {
        min = c;
        if (a <= b) {
            max = b;
        } else {
            max = a;
        } 
    }
    printf("%d %d\n", min, max);
    
    return 0;
}