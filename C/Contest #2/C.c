#include<stdio.h>
#include<limits.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int temp = INT_MAX;

    for (int i = 0; i < n; i++)
    {    
        int k = 1;
        if (k <= x) {
            int t;
            scanf("%d", &t);
            if (t < temp) {
                temp = t;
                k++;
            }
        }
        if (k == x) {
            printf("%d ", temp);
            k = 1;
        }
        
    }

    return 0;
}