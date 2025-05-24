#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a!=b&&a!=c)
    {
        printf("all different");
    }
    else if(a==b&&a==c){
        printf("all the same");
    }
    else printf("neither");
    return 0;
}