#include<stdio.h>
#include<string.h>


int main()
{
    char s[100000];

    scanf("%s", s);

    int consonantCount = 0;


    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {

        } else {
            consonantCount++;
        }
    }


    printf("%d\n", consonantCount);

    return 0;
}