#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=10/2 && b>=40/2 && c>=50/2)
    {
        printf("pass");
    }
    else {
        printf("fail"); 
    }
    return 0;
}