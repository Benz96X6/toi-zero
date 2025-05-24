#include<stdio.h>
int main(){
    char a;
    int b;
    char c;
    int s;
    int v;  
    int bub = 0;
    int all =bub;
    scanf(" %c %d",&a,&b);
    scanf(" %c %d %d",&c,&s,&v);
    if (a=='H')  bub = 5*b;
    else if(a=='O') bub = 3*b;
    else if(a=='J')   bub = 2*b;
    if (c=='R')
    {
        if(s == 1)all = bub+12*v;
        if(s == 2)all = bub+18*v;
        if(s == 3 )all = bub+25*v;
    }
    if (c=='T')
    {
        if(s == 1)all = bub+15*v;
        if(s == 2)all = bub+20*v;
        if(s == 3)all = bub+30*v;
    }
    if(c=='M')
     {
        if(s == 1)all = bub+10*v;
        if(s == 2)all = bub+15*v;
        if(s == 3)all = bub+20*v;
    }
    printf("%d",all);
    return 0;
}