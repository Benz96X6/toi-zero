#include<stdio.h>
int main(){
    int a;
    char b;
    scanf("%d %c",&a,&b);
    if (a<=0&&b=='c'||b=='C'||a<=32&b=='F'||b=='f')
    {
       printf("solid"); /* code */
    }
    else if (a>=100&&b=='c'||b=='C'||a>=212&&b=='f'||b=='F'){
        printf("gas");
    }
    else printf("liquid");
}
