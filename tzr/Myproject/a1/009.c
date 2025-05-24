#include<stdio.h>
int main(){
    int a;
    int b;

    scanf("%d%d",&a,&b);
        int c = a+b;
    if (c>=50)
    {
        /* code */printf("%d\npass",c);
    }
    else{
        printf("%d\nfail",c);
    }
    return 0;
}