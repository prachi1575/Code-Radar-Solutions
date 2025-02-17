# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i=1;
    int sum=0;
    for (i=1;i<=a;i++){
        sum+=i;
        printf("%d",sum);
    }
    return 0;
    
}