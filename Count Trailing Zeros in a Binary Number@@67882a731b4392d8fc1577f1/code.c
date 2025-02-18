# include <stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    if (a==0){
        count=32
    }
    else{
        for (int i=0;i<=31;i++){
            if (a&(1<<i)==0){
                count++;
            }else {
                break;
            }
        }
    }
}
