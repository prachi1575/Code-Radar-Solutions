#include <stdio.h>
int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);
    int mask = ~(1 << n);
    int result = number & mask; 
    printf(" %d\n", result);
    
    return 0;
}
