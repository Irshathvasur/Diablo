#include<stdio.h>
#include<conio.h>

void main(){
    char c[10];
    char sen[100];
    scanf("%s",c);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s",c);
    printf("Second line");
    printf("%s",sen);
}