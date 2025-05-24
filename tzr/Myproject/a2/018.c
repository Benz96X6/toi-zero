#include<string.h>
#include<stdio.h>
int main(){
    char a;
    int b;
    int c;
    char *e[3] ={"Red","Green","Blue"};
    scanf("%c%d",&a,&b);
    if (a=='R')c=0;
    else if(a=='G')c=1;
    else if (a=='B')c=2;
    for (int i = 0; i < b; i++)
    {
       printf("%s ",e[c]);
       ++c;
       c %= 3;
    }
    
}