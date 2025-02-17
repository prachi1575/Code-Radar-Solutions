#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int i;
    for (i = 31; i >= 29; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    return 0;
}
