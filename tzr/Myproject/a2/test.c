#include<stdio.h>
#include<string.h>
int main(){
    
    char a;
    int b;
    int v;
    char *e[3] = {"Red","Green","Blue"};
    scanf("%c%d",&a,&b);
    if(a=='R')v=0;
    else if(a=='G')v=1;
    else if(a=='B')v=2;
    for (int i = 0; i < b; i++)
    {
       printf("%s ",e[v]);
       ++v;
       
    }
    
}