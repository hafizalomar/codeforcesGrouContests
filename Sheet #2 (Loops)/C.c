#include<stdio.h>


int main()
{
    int n, temp;
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);

        if (temp % 2 == 0) {
            Even++;
        } else {
            Odd++;
        }

        if (temp > 0) {
            Positive++;
        } else if (temp < 0) {
            Negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", Even, Odd, Positive, Negative);
}
