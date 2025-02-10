#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
     int c= a<<31 & b;
     printf("%d",c);
    return 0;
}