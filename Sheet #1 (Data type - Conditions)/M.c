#include<stdio.h>
 
int main()
{
    char c;
    scanf("%c", &c);
 
    if (c >= 48 && c <= 57) {
        printf("IS DIGIT");
    } else if (c >= 65 && c <= 90) {
        printf("ALPHA\nIS CAPITAL");
    } else if (c >= 97 && c <= 122){
        printf("ALPHA\nIS SMALL");
    }
    
    
    return 0;
}