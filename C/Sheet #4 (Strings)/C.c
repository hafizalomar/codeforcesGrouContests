#include<stdio.h>
#include<string.h>

int main()
{
    char a[21], b[21];

    scanf("%s %s", a, b);

    int al, bl;
    al = strlen(a);
    bl = strlen(b);

    if (al > bl) {
        printf("%s\n", b);
    } else {
        printf("%s\n", a);
    }

    return 0;
}