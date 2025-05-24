#include<stdio.h>
int main(){
    char a;
    int b;
    char a1;
    int b1;
    scanf(" %c %d",&a,&b);
    scanf(" %c %d",&a1,&b1);
     if(a==a1&&b==b1)printf("1000000");
     else if(a!=a1&&b==b1)printf("100000");
     else if(a==a1&&b%1000==b1%1000)printf("2000");
     else if(a!=a1&&b%1000==b1%1000)printf("200");
     else if(a==a1&&b%100==b1%100)printf("1000");
     else if(a!=a1&&b%100==b1%100)printf("100");
     else if(a==a1&&b!=b1)printf("20");
    else printf("0");
}

