#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int temp = INT_MAX;
    int groupCount = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num < temp)
        {
            temp = num;
        }

        groupCount++;
        if (groupCount == k || i == n - 1)
        {
            printf("%d ", temp);
            temp = INT_MAX; 
            groupCount = 0; 
        }
    }

    return 0;
}