#include<stdio.h>

void count_odd(int ar[], int sz) {
    int odd_count = 0;
    for (int i =  0; i < sz; i++) {
        if (ar[i]%2 != 0) {
            odd_count++;
        }
    }
    printf("%d\n", odd_count);
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    count_odd(array, n);


    return 0;
}