#include<stdio.h>
#include<string.h>

int main()
{
    char ar[100] = "md hafiz al omar";

    int string_length = strlen(ar);

    int array_size = sizeof(ar)/sizeof(char);

    printf("string length = %d\narray size = %d\n", string_length, array_size);






    return 0;
}