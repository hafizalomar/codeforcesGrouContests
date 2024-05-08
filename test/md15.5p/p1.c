#include<stdio.h>

void my_abs(int a) {
    if (a < 0) {
        a = -a;
        printf("%d\n", a);
    } else {
        printf("%d\n", a);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    my_abs(n);



    return 0;
}