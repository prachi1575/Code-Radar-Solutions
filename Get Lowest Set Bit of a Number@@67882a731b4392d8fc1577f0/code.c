# include <stdio.h>
int main(){
    int a;
    int position=1;
    scanf("%d",&a);
    while(!(a&1)){
        a>>1;
        position ++;
    }
    printf("%d",position);
    return 0;
}