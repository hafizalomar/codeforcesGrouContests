#include<stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int m = n*2 -1;
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = m; j > 0; j--) {
            printf("*");
        }
        m-=2;
        printf("\n");
    }





    return 0;
}