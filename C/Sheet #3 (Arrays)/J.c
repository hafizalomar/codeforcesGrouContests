#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    int min_value = INT_MAX;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (min_value > a[i]) {
            min_value = a[i];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (min_value == a[i]) {
            count++;
        }
    }

    if (count%2 != 0) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }


    return 0;
}