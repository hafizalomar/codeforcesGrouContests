#include<stdio.h>

int fun(char c[], int i) {
    if (c[i] == '\0') return 0;
    
    int ans = fun (c, i+1);

    if (c[i] >= 'A' && c[i] <= 'Z') {
        c[i] = c[i] + 32;
    }
    if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
        return ans + 1;
    } else {
        return ans;
    }

}

int main()
{
    char s[200];

    fgets(s, 200, stdin);

    int result = fun(s, 0);

    printf("%d\n", result);
}