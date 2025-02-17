#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    int mask = 7 << 29; 
    int firstThreeBits = (number & mask) >> 29; 
    
    printf(" %d%d%d\n", 
           (firstThreeBits >> 2) & 1, 
           (firstThreeBits >> 1) & 1, 
           firstThreeBits & 1);
    
    return 0;
}
