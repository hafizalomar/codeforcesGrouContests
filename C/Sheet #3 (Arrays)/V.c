#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int ar[a+1], ac[b+1];

    for (int i = 1; i <= a; i++) {
        scanf("%d", &ar[i]);
    }


    for (int j = 1; j <= a; j++) {
        ac[ar[j]]++;
    }

    for (int k = 1; k <= b; k++) {
        printf("%d\n", ac[k]);
    }

    return 0;
}