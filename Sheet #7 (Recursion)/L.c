#include<stdio.h>

int long long sum = 0;

void fun(int ar[], int n, int i) {
    if (n == i) {
        printf("%lld\n", sum);
        return;
    }

    sum = sum + ar[i];
    fun(ar, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    fun(array, n, 0);

    return 0;
}