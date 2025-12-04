#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int length, width, height;
    const int tunnelHeight = 40;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &length, &width, &height);

        if (height < tunnelHeight) {
            int volume = length * width * height;
            printf("%d\n", volume);
        }
    }

    return 0;
}
