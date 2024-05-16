#include<stdio.h>
#include<string.h>

int main()
{
    char a[100000];

    scanf("%s", a);

    int sz = strlen(a);

    for (int i = 0; i < sz; i++) {
        if (a[i] == ',') {
            printf(" ");
        } else if ('A' >= a[i] || a[i] <= 'Z') {
            printf("%c", a[i]+32);
        } else {
            printf("%c", a[i]-32);
        }
    }

    printf("\n");

    return 0;
}