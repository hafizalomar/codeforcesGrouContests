#include<stdio.h>

int main()
{
    int A, B, N;

    scanf("%d %d %d", &N, &A, &B);

    long long int sum = 0;

    for (int i = 1; i <= N; i++) {
        int tempDigitSum = 0;
        int temp = i;
        while (temp > 0){
            tempDigitSum += temp%10;
            temp = temp/10;
        }
        if (tempDigitSum >= A && tempDigitSum <= B) {
            sum += i;
        }
    }
    printf("%lld\n",  sum);
}