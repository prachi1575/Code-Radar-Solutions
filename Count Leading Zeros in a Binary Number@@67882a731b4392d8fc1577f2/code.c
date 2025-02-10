#include <stdio.h>

int main() {
    int num;
    int count = 0;
    int i;
    scanf("%d", &num);

    for (i = 0; i < 32; i++) {
        if ((num & (1 << i)) == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
