# include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
   if(a>>b & 1){printf("%d",b);}
   else{printf("%d",a);}
    return 0;
}