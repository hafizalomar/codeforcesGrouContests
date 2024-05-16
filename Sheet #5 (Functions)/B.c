#include<stdio.h>

void fun(void){
    int n;
    scanf("%d", &n);

    for (int i = 0; i< n; i++) {
        printf("%d", i+1);
        if (i < n-1) {
            printf(" ");
        }
    }
}

int main()
{


    fun();


    return 0;
}