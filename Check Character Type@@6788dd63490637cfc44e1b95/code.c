# include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='e'||a=='i'||a=='0'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }
    else if((a>='A' && a<='Z') || (a>='a' && a<='z')){
        printf("Consonant");
    }

}