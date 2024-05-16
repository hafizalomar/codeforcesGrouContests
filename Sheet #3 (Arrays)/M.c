#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (max <= a[i]) {
            max = a[i];
            maxIndex = i;
        }
        if (min >= a[i]) {
            min = a[i];

    printf("max = %d", a[maxIndex]);
            minIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}