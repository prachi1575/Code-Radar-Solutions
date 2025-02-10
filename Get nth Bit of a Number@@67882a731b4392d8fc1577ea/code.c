# include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if ((a>>b)&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}