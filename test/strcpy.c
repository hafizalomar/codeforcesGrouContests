#include<stdio.h>
#include<string.h>

int main()
{
    char a[10], b[10];

    scanf("%s %s", a, b);

    for (int i = 0; i <= strlen(b); i++) {
        a[i] = b[i];
    }

    printf("%s %s\n", a, b);

    char c[10];
    scanf("%s", c);
    
    strcpy(b, c);

    printf("%s %s %s\n", a, b, c);

    return 0;
}