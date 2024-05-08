#include<stdio.h>

int count_before_one(int *a, int sz) {
    int count = 0;
    for (int i = 0; i < sz; i++) {
        if (a[i] == 1) {
            return count;
        } else {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = count_before_one(a, n);

    printf("%d\n", result);

    return 0;
}