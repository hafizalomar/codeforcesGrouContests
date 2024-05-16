#include<stdio.h>

int main()
{
    char ch;
    int num;
    scanf("%c %d", &ch, &num);

    for (int i = 0; i < num; i++) {
        int n;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }



    return 0;
}