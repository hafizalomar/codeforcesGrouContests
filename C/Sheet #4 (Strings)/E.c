#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000000];

    scanf("%s", s);
    
    int i = 0, sum = 0;

    while (s[i] != '\0')
    {
        switch (s[i])
        {
            case '0':
                sum += 0;
                break;
            case '1':
                sum += 1;
                break;
            case '2':
                sum += 2;
                break;
            case '3':
                sum += 3;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 7;
                break;
            case '8':
                sum += 8;
                break;
            case '9':
                sum += 9;
                break;
            default:
                break;
        }
        i++;
    }

    printf("%d\n", sum);
    


    return 0;
}