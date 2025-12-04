#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1;
    int b = 2;
    int c;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n1 = 2;
    int n2 = 3;

    printf("%d\n", climbStairs(n1));
    printf("%d\n", climbStairs(n2));

    return 0;
}
