#include <stdio.h>

int main() {
    int number;
    int count = 0;
    scanf("%d", &number);
    if (number == 0) {
        count = 32;
    } else {
        for (int i = 31; i >=0; i--) {
            if ((number & (1 << i)) == 0) {
                count++;
            } else {
                break;
            }
        }
    }

    printf("%d", count);

    return 0;
}
