#include<stdio.h>
int main(){
    int a;
    char b;
    scanf("%d %c",&a,&b);
    int x = 10*(a%10)+a/10;
    if (b=='+')
    {
        printf("%d + %d=%d",a,x,a+x);
    }
    else if(b=='*'){
        printf("%d * %d=%d",a,x,a*x);
    }
    return 0;
    
}   