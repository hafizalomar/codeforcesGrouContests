#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    int array[t];


    long long int sum = 0;

    for (int i = 0; i < t; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    sum = fabs(sum);

    printf("%lld\n" ,sum);

    return 0;
}