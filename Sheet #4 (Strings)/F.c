#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char a[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", a);
        int sz = strlen(a);

        if (sz > 10) {
            printf("%c%d%c\n", a[0], sz-2, a[sz-1]);
        } else {
            printf("%s\n", a);
        }
    }

    return 0;
}