#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000000];

    scanf("%s", s);
    
    int i = 0, sum = 0;

    while (s[i] != '\0')
    {
        sum += s[i]-'0';
        i++;
    }

    printf("%d\n", sum);
    


    return 0;
}