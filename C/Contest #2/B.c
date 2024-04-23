#include<stdio.h>

int main()
{
    int n, slash = 0;;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            if(j == n/2 && i == n/2) {
                printf("X");
            } else if(j == slash){
                printf("\\");
            } else if (j == n-slash-1) {
                printf("/");
            } else {
                printf("*");
            }
        }
        slash++;
        printf("\n");
    }



    return 0;
}