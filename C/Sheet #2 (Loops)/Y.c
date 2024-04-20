#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int base1 = 0, base2 = 1;

    for (int i = 1; i < n; i++) {
        if (i <= 1) {
            printf("%d %d ", base1, base2);
        } else {
            int ans = base1 + base2;
            printf("%d ", ans);
            base1 = base2;
            base2 = ans;
        }
    }


    return 0;
}