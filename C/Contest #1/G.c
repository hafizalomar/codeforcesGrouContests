#include<stdio.h>

int main()
{
    long long int n, m, k;
    long long int doll = 0;

    scanf("%lld %lld %lld", &n, &m, &k);


    if (k > 0) {
        if (n > 0) {
            if (m > 0) {
                if (n >= m && k >= m) {
                    doll = m;
                    n -= doll;
                    k -= doll;
                    if (k >= n/2) {
                        doll += n/2;
                    } else if (k <= n/2) {
                        doll += k;
                    }
                } else if (n >= k && m >= k) {
                    doll = k;
                } else if (n <= m && n <= k) {
                    doll = n;
                }
            } else {
                if (k >= n/2) {
                    doll = n/2;
                } else if (k <= n/2) {
                    doll = k;
                }
            }
        } else {
            printf("0\n");
            return 0;
        }
    } else {
        printf("0\n");
        return 0;
    }
    
    printf("%lld\n", doll);

    return 0;
}