#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b&&b<c)
    {
        printf("increasing");
    }
    else if(a>b&&b>c){
        printf("decreasing");
    }
    else printf("neither");
    return 0;
}