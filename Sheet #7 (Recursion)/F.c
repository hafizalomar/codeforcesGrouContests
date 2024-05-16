#include<stdio.h>

void fun(int ar[], int n, int i) {
    if (n == i) return;
    fun(ar, n, i+1);
    if (i%2  == 0) {
        printf("%d ", ar[i]);
    }
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