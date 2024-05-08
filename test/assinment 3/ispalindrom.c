#include<stdio.h>
#include<string.h>

int is_palindrome(char *s) {
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len/2; i++) {
        if (s[i] == s[len-1-i]) {
            count++;
        } else {
            return 0;
        }
    }
    
    if (count == len/2) {
        return 1;
    } 
    return 0;
}

int main()
{
    char s[1000];

    scanf("%s", s);

    int result = is_palindrome(s);

    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}