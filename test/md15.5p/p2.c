#include<stdio.h>
#include<string.h>

void my_len(char ar[]) {
    int size = 0;
    int i = 0;
    while (ar[i] != '\0')
    {
        size++;
        i++;
    }
    printf("%d\n", size);
}

int main()
{

    char word[100];

    scanf("%s", word);

    my_len(word);

    return 0;
}