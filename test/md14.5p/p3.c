#include<stdio.h>

int char_to_ascii(char a);

int main()
{
    char ch;

    scanf("%c", &ch);

    int a = char_to_ascii(ch);
    printf("%d\n", a);


    return 0;
}


int char_to_ascii(char a){
    return a;
}