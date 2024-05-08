#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[100000];

    for (int i = 0; i < t; i++) {
        int cap = 0, small = 0, num = 0;
        scanf("%s", s);

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cap++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                small++;
            } else {
                num++;
            }
        }

        printf("%d %d %d\n", cap, small, num);
    }





    return 0;
}