#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int get = 0;

    for (int i = a; i <= b; i++) {
        int temp = i, com = 0, dept = 0;
        while (temp >= 1) {
            com++;
            if (temp%10 == 4 || temp%10 == 7) {
                temp /= 10;
                dept++;
            } else {
                break;
            }
        }
        if (com == dept) {
            get++;
            printf("%d ", i);
        }
    }
    if (get<=0) {
        printf("-1\n");
    }

    return 0;
}