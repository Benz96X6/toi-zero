#include<stdio.h>
int main(){
    int a;
    char b;
    scanf("%d %c",&a,&b);
    if (a<18 || b=='s'||b=='S')
    {
        printf("20");
    }
    else printf("50");
    return 0;
}