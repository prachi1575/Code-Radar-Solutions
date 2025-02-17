#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    printf("Binary representation: ");
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (number >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    return 0;
}
