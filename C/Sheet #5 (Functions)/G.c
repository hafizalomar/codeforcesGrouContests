#include<stdio.h>
#include<limits.h>

void min_max(int ar[], int sz) {
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < sz; i++) {
        if (ar[i] < min) {
            min = ar[i];
        }
        if (ar[i] > max) {
            max = ar[i];
        }
    }

    printf("%d %d\n", min, max);
} 

int  main()
{

    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    min_max(array, n);

    return 0;
}