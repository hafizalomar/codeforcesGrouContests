#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    scanf("%s", a);

    int sz = strlen(a);
    int chk = 0;

    for (int i = 0; i < sz/2; i++) {
        if (a[i] == a[sz-i-1]) {
            chk++;
        } else {
            printf("NO\n");
            return 0;
        }
    }

    if (chk == sz/2) {
        printf("YES\n");
    }



    return 0;
}