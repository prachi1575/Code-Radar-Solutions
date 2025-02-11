# include <stdio.h>
int main(){
    int i;
    for (i=1;i<=5;i++){
        printf(" %d ",i);
        if (i<5){
            printf("");
        }
    }
    return 0;
}