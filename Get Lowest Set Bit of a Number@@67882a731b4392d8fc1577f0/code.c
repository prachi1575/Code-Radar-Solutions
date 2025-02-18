#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    number = a;
    int lowestSetBit = number & -number;
    printf("%d", lowestSetBit);
    
    return 0;
}
