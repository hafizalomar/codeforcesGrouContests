#include<stdio.h>
#include<string.h>

int main()
{
    char a[11], b[11];

    scanf("%s %s", a, b);

    int al = strlen(a);
    int bl = strlen(b);

    printf("%d %d\n%s%s\n", al, bl, a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    printf("%s %s\n", a, b);

    return 0;
}