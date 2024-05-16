#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int temp = 0;
    
    while (n >= 10)
    {
        n = n/10;
        temp = n;
    }
 
    if (temp%2 == 0)
    {
        printf("EVEN");
    } else 
        printf("ODD");
    
    
    
    return 0;
}