#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int dive2 = 0, dive3 = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i]%2 == 0) {
            dive2++;
        } else if (a[i]%3 == 0){
            dive3++;
        }
    }

    printf("%d %d\n", dive2, dive3);
}